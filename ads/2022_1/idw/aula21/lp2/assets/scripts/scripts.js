$(document).ready(() => {

  $('section').load('pages/home.html');
  $('#menuSobre').addClass('active');

  function clearClass(){
      $('#menuHome').removeClass('active');
      $('#menuSobre').removeClass('active');
      $('#menuProdutos').removeClass('active');
      $('#menuContato').removeClass('active');
  }

  $('#menuHome').click(() => {
      clearClass()
      $('#menuHome').addClass('active');
      $('section').load('pages/home.html');
  })

  $('#menuSobre').click(() => {
      clearClass()
      $('#menuSobre').addClass('active');
      $('section').load('pages/sobre.html');
  })

  $('#menuPortfolio').click(() => {
      clearClass()
      $('#menuPortfolio').addClass('active');
      $('section').load('pages/portfolio.html');
  })

  $('#menuContato').click(() => {
    clearClass()
    $('#menuContato').addClass('active');
    $('section').load('pages/contato.html');
})
})