$(document).ready(function(){



    function removeCss(){
        $('#menu_home'). removeClass('active');
        $('#menu_calculadora'). removeClass('active');
    }

    $('#menu_home').click(function(){
        removeCss();
        $('#menu_home'). addClass('active');
        $('section').load('paginas/home.html', function(){
        });
    })

    $('#menu_calculadora').click(function(){

        $('section').load('exercicios/calculadora.html', function(){
            removeCss();
            $('#menu_calculadora'). addClass('active');
            $('#calcular').click(function(){
                var num1 = parseFloat($('#entrada1').val());
                var num2 = parseFloat($('#entrada2').val());
                var operacao = $('#operador').val();
                var resultado;
        
                switch (operacao) {
                    case '+':
                        resultado = (num1 + num2);
                        break;
        
                    case '-':
                        resultado = (num1 - num2);
                        break;
        
                    case '*':
                        resultado = (num1 * num2);
                        break;
        
                    case '/':
                        resultado = (num1 / num2);
                        break;
            
                    default:
                        break;
            }
        
            $('#result').val('' + resultado);
        
            })
        });
    })
})
