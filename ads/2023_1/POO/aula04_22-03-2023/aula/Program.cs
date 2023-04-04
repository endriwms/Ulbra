using aula;

Livro livro = new Livro(12, "343434", "BD");
Livro livro1 = new Livro(21, "3434343434", "LPO", 99);
Livro livro2 = new Livro(12, "9999999", "LPOII", 111);
Livro livro3 = new Livro(12, "10101010", "AP1");




Show(livro.Titulo);
Show(livro2.Titulo);

List<Livro> lista = new List<Livro>();

lista.Add(livro);
lista.Add(livro1);
lista.Add(livro2);
lista.Add(livro3);


foreach (var item in lista)
{
  Show(item.ToString());
}

void Show(string texto)
{
  Console.WriteLine(texto);
}

void Input()
{
  
}