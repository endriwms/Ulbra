using Aula;

Book BdBook = new Book(2323, "e93939393", "Banco de dados filosofico", 240);

BdBook.Value = 290;
Console.WriteLine(BdBook.Id + "-" + BdBook.Isbn + " - " + BdBook.Value + "R$");
