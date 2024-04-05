void main() {
  print(dobrarLista([1, 2, 3, 4, 5]));
}

List<double> dobrarLista(List<double> lista) {
  return lista.map((num) => num * 2).toList();
}
