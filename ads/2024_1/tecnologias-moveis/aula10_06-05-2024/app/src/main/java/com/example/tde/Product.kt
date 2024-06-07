package com.example.tde

import java.io.Serializable

data class Product(
  val urlImage: String,
  val name: String,
  val price: String
) : Serializable
