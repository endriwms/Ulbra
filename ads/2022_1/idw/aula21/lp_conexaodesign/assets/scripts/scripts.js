$(document).ready(() => {

    $('section').load('pages/home.html');
    $('#menuSobre').addClass('active');

    $('#botao').click(() => {
        load('src/sobre.html');
    })


    function clearClass(){
        $('#menuHome').removeClass('active');
        $('#menuSobre').removeClass('active');
        $('#menuProdutos').removeClass('active');
        $('#menuContato').removeClass('active');
    }

    $('#menuHome').click(() => {
        clearClass()
        $('#menuHome').addClass('active');
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