$(document).ready(() => {

    $('section').load('pages/home.html');
    $('#menuHome').addClass('active');

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
        $('section').load('src/sobre.html');
    })

    $('#menuProdutos').click(() => {
        clearClass()
        $('#menuProdutos').addClass('active');
        $('section').load('src/produtos.html');
    })

    $('#menuContato').click(() => {
        clearClass()
        $('#menuContato').addClass('active');
        $('section').load('src/contato.html');
    })
})