void main() {
  print(getAverage([1, 2, 3, 4, 5]));
}

double getAverage(List<int> numbers) {
  return numbers.reduce((a, b) => a + b) / numbers.length;
}
