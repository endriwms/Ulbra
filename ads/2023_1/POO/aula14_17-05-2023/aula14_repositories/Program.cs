using aula14_repositories.Domain.Entities;
using aula14_repositories.Data;
using aula14_repositories.Data.Repositories;
using aula14_repositories.csproj;

var db = new DataContext();

var PersonRepository = new PersonRepository(db);

listPeople();


// var vanesssaChange = PersonRepository.GetById();
// vanesssaChange.name = "Vanessa cardoso";
// vanesssaChange.phoneNumber = "4444444444";
// PersonRepository.Update(vanesssaChange);


void listPeople()
{
  Console.WriteLine("Listing People");
  var people = PersonRepository.GetAll();

  foreach (var item in people)
  {
    Console.WriteLine($"(Id: {item.Id}) | Nome: {item.Name} | Fone: {item.Telefone}\n");
  }
}