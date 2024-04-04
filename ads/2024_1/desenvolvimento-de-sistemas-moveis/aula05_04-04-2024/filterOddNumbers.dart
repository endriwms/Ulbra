void main() {
  print(filterOddNumbers([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]));
}

List<int> filterOddNumbers(List<int> numbers) {
  return numbers.where((number) => number % 2 != 0).toList();
}
