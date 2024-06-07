package com.example.tde

import android.content.Context
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.PopupMenu
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide

class ProductAdapter(
  private val items: MutableList<Product>,
  private val goToItemDetail: (item: Product) -> Unit
) : RecyclerView.Adapter<ProductAdapter.ViewHolder>() {

  private lateinit var context: Context

  override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ProductAdapter.ViewHolder {
    context = parent.context
    val view = LayoutInflater.from(parent.context).inflate(R.layout.product_item, parent, false)
    return ViewHolder(view)
  }


  override fun onBindViewHolder(holder: ProductAdapter.ViewHolder, position: Int) {
    holder.itemView.rootView.setOnClickListener {
      goToItemDetail(items[position])
    }

    holder.itemView.rootView.setOnLongClickListener {
      showPopUpMenu(holder.itemView, position)
      true
    }

    Glide.with(context).load(items[position].urlImage).into(holder.imageProduct)
    holder.productName.text = items[position].name
    holder.productPrice.text = items[position].price.convertToMoneyWithSymbol()
  }

  override fun getItemCount(): Int {
    return items.size
  }

  inner class ViewHolder(view: View) : RecyclerView.ViewHolder(view) {
    val imageProduct: ImageView = view.findViewById(R.id.productImage)
    val productName: TextView = view.findViewById(R.id.productName)
    val productPrice: TextView = view.findViewById(R.id.productPrice)
  }

  private fun showPopUpMenu(view: View, position: Int) {
    PopupMenu(context, view).apply {
      setOnMenuItemClickListener {
        item -> when(item.itemId) {
          R.id.deletar -> {
            removeItem(items[position])
            true
          }

          else -> false
        }
      }
      inflate(R.menu.menu_popup)
      show()
    }
  }

  fun removeItem(product: Product) {
    items.remove(product)
    notifyDataSetChanged()
  }
}