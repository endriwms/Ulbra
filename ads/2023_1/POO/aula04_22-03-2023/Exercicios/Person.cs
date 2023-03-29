using System;
using System.Collections.Generic;

namespace exercicios {
    public class Person {
        public int Id { get; set; }
        public string Name { get; set; }
        public string Phone { get; set; }

        public Person(int id, string name, string phone) {
            Id = id;
            Name = name;
            Phone = phone;
        }
    }

    public class PersonRepository {
        private List<Person> _personList = new List<Person>();
        public List<Person> GetAll() {
            return _personList;
        }

        public void Add(Person person) {
            _personList.Add(person);
        }

        public void Update(Person person) {
            int index = _personList.FindIndex(p => p.Id == person.Id);
            if (index != -1) {
                _personList[index] = person;
            }
        }

        public void Delete(Person person) {
            _personList.RemoveAll(p => p.Id == person.Id);
        }
    }
}
