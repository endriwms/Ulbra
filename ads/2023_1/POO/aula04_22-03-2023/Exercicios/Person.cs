using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace exercicios {
  public class Person {
    public int Id { get; set; }
    public string Name { get; set; }
    public string Phone { get; set; }
    
    public Person (int id, string name, string phone) {
      Id = id;
      Name = name;
      Phone = phone;
    }
  }

  public class PersonRepository {
    private List<Person> personList = new List<Person>();
    public List<Person> GetAll() {
      return personList;
    }

    public void Add(Person person) {
      personList.Add(person);
    }

    public void Update(Person person) {
      // A expressão lambda p => p.Id == person.Id verifica se o Id do objeto Person p é igual ao Id do objeto Person fornecido como parâmetro, se não houver ID, o método FindIndex retorna -1.
      int index = personList.FindIndex(p => p.Id == person.Id);
      if (index != -1) {
        personList[index] = person;
      }
    }

    public void Delete(Person person) {
      personList.RemoveAll(p => p.Id == person.Id);
    }   
  }
}