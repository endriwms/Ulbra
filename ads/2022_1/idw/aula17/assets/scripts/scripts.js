$(document).ready(function(){

    function removeCss(){
        $('#menu_home'). removeClass('active');
        $('#menu_calculadora'). removeClass('active');
        $('#menu_contadeluz'). removeClass('active');
    }

    $('#menu_home').click(function(){
        removeCss();
        $('#menu_home'). addClass('active');
        $('section').load('src/home.html', function(){
        });
    })

    $('#menu_calculadora').click(function(){

        $('section').load('src/calculadora.html', function(){
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

    $('#menu_contadeluz').click(function(){

        $('section').load('src/contadeluz.html', function(){
            removeCss();
            $('#menu_contadeluz'). addClass('active');
            $('#calcular').click(function(){
                var quantidadeKwh = parseFloat($('#quantidadeKwh').val());
                var valorKwh = parseFloat($('#valorKwh').val());
                var valorConta = quantidadeKwh * valorKwh

                if(quantidadeKwh > 100 && quantidadeKwh <=200){
                    valorConta = valorConta * 1.25;
                }else if(quantidadeKwh > 200){
                    valorConta = valorConta *1.5;
                }
            $('#result2').val('' + valorConta);
        
            })
        });
    })

    $('#menu_verifNum').click(function(){

        $('section').load('src/verificarnumero.html', function(){
            removeCss();
            $('#menu_verifNum'). addClass('active');
            $('#calcular').click(function(){

                var numeros = ($('#numeros').val());
                var maior = 0;
                numeros = numeros.split(',');

                for(var i = 0; i < numeros.length; i++){
                    var valorAtual = parseFloat(numeros[i]);
                    if(valorAtual > maior){
                        maior = valorAtual;
                    }
                }
            $('#result3').val('' + valorAtual);
        
            })
        });
    })

    $('#menu_verifIdade').click(function(){

        $('section').load('src/maiordeidade.html', function(){
            removeCss();
            $('#menu_verifIdade'). addClass('active');
            $('#calcular').click(function(){
                var idades = ($('#idades').val());
                idades = idades.split(',');

                var maioresDeIdade = 0;
                var menoresDeIdade = 0;

                for(var i = 0; i < idades.length; i++){
                    var idadeAtual = parseFloat(idades[i]);
                    if(idadeAtual >= 18){
                        maioresDeIdade++;
                    }else{
                        menoresDeIdade++;
                    }
                }

            $('#resultMaior').val('' + maioresDeIdade);
            $('#resultMenor').val('' + menoresDeIdade);
            })
        });
    })

})
