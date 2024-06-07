package com.example.tde

fun String.convertToMoneyWithSymbol() = "R$ ".plus(this.replace(".", ","))