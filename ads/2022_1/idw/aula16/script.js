/*
var resposta = confirm ('Você é vegano?');
    if(resposta == true){
        alert('Coma mais proteínas...');
    }else{
        alert('Coma menos gorduras...');
    }

var email = prompt('Digite seu email');
alert('O email ' + email + 'será usado para span');

var num1 = parseFloat(promp('Digite um número:'));
var num2 = parseFloat(promp('Digite outro número:'));


function nomeDaMinhaFuncaoque(num1, num2){
    var resultado = num1 + num2;
    return resultado;
}

var receberResultado = soma (1, 2);
console.log(receberResultado);

console.log(soma(2, 6));


function lerValor(){
    var resultado = document.getElementById('valor').value;

    var conteudo = document.getElementById('resultado').innerHTML;

    document.getElementById('resultado').innerHTML = conteudo + '<br>' resultado;
}
*/

function verificar(){
    var termo = document.getElementById('termo') . value;
    if(termo != '' && termo != null){
        return true;
    }else{
        return false;
    }
}