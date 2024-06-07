package com.example.myapplication

import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.Toolbar
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentContainerView
import com.google.android.material.bottomnavigation.BottomNavigationView

class MainActivity : AppCompatActivity() {
  override fun onCreate(savedInstanceState: Bundle?) {
    super.onCreate(savedInstanceState)
    enableEdgeToEdge()
    setContentView(R.layout.activity_main)
    ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
      val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
      v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
      insets
    }

    val toolbar = findViewById<Toolbar>(R.id.toolbar)

    setSupportActionBar(toolbar)
    supportActionBar?.apply {
      title = "Home"
      setDisplayHomeAsUpEnabled(true)
    }

    val bottomNav = findViewById<BottomNavigationView>(R.id.bottomNav)
    val fragmentContainer = R.id.fragment_container

    loadFragment(fragmentContainer, HomeFragment())

    bottomNav.setOnItemSelectedListener {
      item -> when (item.itemId) {
        R.id.home -> loadFragment(fragmentContainer, HomeFragment())
        R.id.details -> loadFragment(fragmentContainer, DetailFragment())
        else -> false
      }
    }
  }

  private fun loadFragment(container: Int, fragment: Fragment): Boolean {
    supportFragmentManager
      .beginTransaction()
      .replace(container, fragment)
      .commit()

    return true
  }

  override fun onSupportNavigateUp(): Boolean {
    finish()
    return super.onSupportNavigateUp()
  }
}