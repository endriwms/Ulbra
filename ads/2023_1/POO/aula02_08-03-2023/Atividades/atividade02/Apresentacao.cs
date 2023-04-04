using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace atividade02 {
    public class Pessoa {
        public string? Name { get; set; }
        public int Age { get; set; }

        public void Apresentar() {
            Console.WriteLine($"Meu nome é {Name} e eu tenho {Age} anos.");
        }
    }
}