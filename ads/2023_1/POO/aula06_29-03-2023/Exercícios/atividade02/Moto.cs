using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace atividade02
{
    public class Moto : Veiculo
    {
        public override void Acelerar() {
            Console.WriteLine("Acelerando moto!");
        }  
    }
}