using aula13_continuacaoEF.Domain.Entities;
using aula13_continuacaoEF.Data;
using aula13_continuacaoEF.Data.Repositories;
using aula13_continuacaoEF.csproj;

var db = new DataContext();

var PersonRepository = new PersonRepository(db);

// Console.WriteLine("Inserting a new person Using repository person");
// var person = new Person() { Id = 3, Name = "Felipe", Telefone = "1234123457" };
// PersonRepository.Save(person);


// var personFind = PersonRepository.GetById(3);
// Console.WriteLine($"(Id: {personFind.Id}) | Nome: {personFind.Name} | Fone: {personFind.Telefone}\n");

listPeople();
Console.WriteLine("Delete person id 3");
PersonRepository.Delete(2);

// var prod = new Product() { Id = 100, Description = "Garrafa de Alcool Gel" };

Console.WriteLine("List People");

void listPeople()
{
  var people = PersonRepository.GetAll();

  foreach (var item in people)
  {
    Console.WriteLine($"(Id: {item.Id}) | Nome: {item.Name} | Fone: {item.Telefone}\n");
  }
}