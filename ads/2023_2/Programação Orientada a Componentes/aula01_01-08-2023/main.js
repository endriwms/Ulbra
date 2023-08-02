function somarNumeros(n1, n2) {
  const resultado = n1 + n2;
  console.log("O resultado da soma de %d e %d é:", n1, n2, + resultado)
}
somarNumeros(65, 43);

console.log("-----------------")

function indentificarImparesEPares(list){
  const pares = [];
  const impares = [];

  for (let numero of list) {
    if(numero % 2 === 0){
      pares.push(numero);
    } else {
      impares.push(numero);
    }
  }

  console.log('numeros pares:', pares);
  console.log('numeros impares:', impares);
}
const numeros = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
indentificarImparesEPares(numeros)