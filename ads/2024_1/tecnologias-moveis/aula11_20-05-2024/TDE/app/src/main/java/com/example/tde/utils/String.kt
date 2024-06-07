package com.example.tde.utils

fun String.convertToMoneyWithSymbol() = "R$ ".plus(this.replace(".", ","))