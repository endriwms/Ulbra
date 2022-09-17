$(document).ready(() =>{

  /* jQuery */
  $('section').load('pages/home.html');
  $('slider').load('pages/slider.html')
    $('#menuHome').addClass('active');

    function clearClass(){
        $('#menuHome').removeClass('active');
        $('#menuSobre').removeClass('active');
        $('#menuProdutos').removeClass('active');
        $('#menuContato').removeClass('active');
    }

    $('#menuHome').click(() => {
        clearClass()
        $('section').load('pages/home.html');
    })

    $('#menuSobre').click(() => {
        clearClass()
        $('section').load('pages/sobre.html');
    })

    $('#menuSkills').click(() => {
        clearClass()
        $('section').load('pages/skills.html');
    })

    $('#menuPortfolio').click(() => {
        clearClass()
        $('section').load('pages/portfolio.html');
    })

    $('#menuContato').click(() => {
      clearClass()
      $('section').load('pages/contato.html');
  })

})


