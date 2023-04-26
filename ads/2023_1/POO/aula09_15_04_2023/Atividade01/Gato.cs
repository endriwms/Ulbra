using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Atividade01
{
    public class Gato : IAnimal
    {
        public void EmitirSom()
        {
            Console.WriteLine("O gato mia.");
        }
    }
}