using System;

namespace exercicios {
  class Program {
    static void Main(string[] args) {
      PersonRepository personRepository = new PersonRepository();

      while (true) {
        Console.WriteLine("\nSelecione a operação que deseja realizar:");
        Console.WriteLine("1 - Adicionar pessoa");
        Console.WriteLine("2 - Listar todas as pessoas");
        Console.WriteLine("3 - Atualizar dados de uma pessoa");
        Console.WriteLine("4 - Excluir uma pessoa");
        Console.WriteLine("5 - Sair");

        string opcao = Console.ReadLine();
        Console.WriteLine();

        switch (opcao) {
          case "1":
            Console.Write("Informe o nome da pessoa: ");
            string name = Console.ReadLine();

            Console.Write("Informe o telefone da pessoa: ");
            string phone = Console.ReadLine();

            Person person = new Person(personRepository.GetAll().Count + 1, name, phone);
            personRepository.Add(person);

            Console.WriteLine("\nPessoa adicionada com sucesso!\n");
            break;

          case "2":
            var persons = personRepository.GetAll();
            Console.WriteLine("Lista de todas as pessoas cadastradas:\n");

            foreach (var Person in persons) {
              Console.WriteLine($"ID: {Person.Id}");
              Console.WriteLine($"Nome: {Person.Name}");
              Console.WriteLine($"Telefone: {Person.Phone}");
              Console.WriteLine();
            }
            break;

          case "3":
            Console.Write("Informe o ID da pessoa que deseja atualizar: ");
            int id = int.Parse(Console.ReadLine());

            var personToUpdate = personRepository.GetAll().Find(p => p.Id == id);

            if (personToUpdate != null) {
              Console.Write("Informe o novo nome da pessoa: ");
              string newName = Console.ReadLine();

              Console.Write("Informe o novo telefone da pessoa: ");
              string newPhone = Console.ReadLine();

              Person newPerson = new Person(id, newName, newPhone);
              personRepository.Update(newPerson);

              Console.WriteLine("\nDados da pessoa atualizados com sucesso!\n");
            } else {
              Console.WriteLine("\nNão existe pessoa cadastrada com o ID informado!\n");
            }
            break;

          case "4":
            Console.Write("Informe o ID da pessoa que deseja excluir: ");
            int deleteId = int.Parse(Console.ReadLine());

            var personToDelete = personRepository.GetAll().Find(p => p.Id == deleteId);

            if (personToDelete != null) {
              personRepository.Delete(personToDelete);
              Console.WriteLine("\nPessoa excluída com sucesso!\n");
            } else {
              Console.WriteLine("\nNão existe pessoa cadastrada com o ID informado!\n");
            }
            break;

          case "5":
            Console.WriteLine("Programa encerrado.");
            Environment.Exit(0);
            break;

          default:
            Console.WriteLine("\nOpção inválida! Tente novamente.\n");
            break;
        }
      }
    }
  }
}