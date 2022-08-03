$(document).ready(function(){

  $('section').load('pages/home.html');
  
  function removeCss(){
    $('#menu_home'). removeClass('active');
    $('#menu_sobre'). removeClass('active');
    $('#menu_contato'). removeClass('active');
  }

  $('#menu_home').click(function(){
    removeCss();
    $('#menu_home'). addClass('active');
    $('section').load('pages/home.html', function(){
    });
  })

  $('#menu_sobre').click(function(){
    removeCss();
    $('#menu_sobre'). addClass('active');
    $('section').load('pages/sobre.html', function(){
    });
  })

  $('#menu_contato').click(function(){
    removeCss();
    $('#menu_contato'). addClass('active');
    $('section').load('pages/contato.html', function(){
    });
  })


});