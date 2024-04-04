void main() {
  List<int> numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
  List<int> evenNumbers = filterEvenNumbers(numbers);

  print('Original numbers: $numbers');
  print('Even numbers: $evenNumbers');
}

List<int> filterEvenNumbers(List<int> numbers) {
  return numbers.where((number) => number % 2 == 0).toList();
}
