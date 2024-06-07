package com.example.tde

import android.os.Bundle
import android.widget.ImageView
import android.widget.TextView
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import com.bumptech.glide.Glide

class ProductDetailActivity : AppCompatActivity() {
  override fun onCreate(savedInstanceState: Bundle?) {
    super.onCreate(savedInstanceState)
    enableEdgeToEdge()
    setContentView(R.layout.activity_product_detail)
    ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
      val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
      v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
      insets
    }

    val productBundle = intent.getSerializableExtra("data") as? Product

    val image = findViewById<ImageView>(R.id.productImage)
    val name = findViewById<TextView>(R.id.productName)
    val price = findViewById<TextView>(R.id.productPrice)

    price.text = productBundle?.price
    name.text = productBundle?.name
    Glide.with(this).load(productBundle?.urlImage).into(image)

  }
}