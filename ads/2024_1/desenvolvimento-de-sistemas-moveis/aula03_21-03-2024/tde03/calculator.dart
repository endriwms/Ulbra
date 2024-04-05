void main() {
  print(calculadora(10, 5, '+'));
  print(calculadora(10, 5, '-'));
  print(calculadora(10, 5, '*'));
  print(calculadora(10, 0, '/'));
}

double calculadora(double num1, double num2, String operacao) {
  switch (operacao) {
    case '+':
      return num1 + num2;
    case '-':
      return num1 - num2;
    case '*':
      return num1 * num2;
    case '/':
      if (num2 != 0) {
        return num1 / num2;
      } else {
        print('Divisão por zero não é permitida.');
        return 0;
      }
    default:
      print('Operação inválida.');
      return 0;
  }
}
