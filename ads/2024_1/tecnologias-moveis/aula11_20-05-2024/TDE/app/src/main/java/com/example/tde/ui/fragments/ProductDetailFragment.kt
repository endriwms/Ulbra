package com.example.tde.ui.fragments

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
import androidx.core.os.bundleOf
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import androidx.fragment.app.Fragment
import com.bumptech.glide.Glide
import com.example.tde.R
import com.example.tde.extensions.configureToolbar
import com.example.tde.models.Product

class ProductDetailFragment : Fragment() {

  override fun onCreateView(
    inflater: LayoutInflater, container: ViewGroup?,
    savedInstanceState: Bundle?
  ): View? {
    val view = inflater.inflate(R.layout.fragment_product_detail, container, false)

    ViewCompat.setOnApplyWindowInsetsListener(view.findViewById(R.id.main)) { v, insets ->
      val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
      v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
      insets
    }

    val product = arguments?.getSerializable("data") as? Product

    val image = view.findViewById<ImageView>(R.id.productImage)
    val name = view.findViewById<TextView>(R.id.productName)
    val price = view.findViewById<TextView>(R.id.productPrice)

    price.text = product?.price
    name.text = product?.name
    Glide.with(this).load(product?.urlImage).into(image)

    (requireActivity() as AppCompatActivity).configureToolbar(name.text.toString(), true)

    return view
  }

  companion object {
    fun newInstance(product: Product) = ProductDetailFragment().apply {
      arguments = bundleOf("data" to product)
    }
  }
}
