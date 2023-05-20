using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace atividade02
{
    public class Escola
    {
        public void ApresentarPessoa(IPessoa pessoa)
        {
            Console.WriteLine($"Nome: {pessoa.Nome}, Idade: {pessoa.Idade}");
            pessoa.Falar();
        }
    }
}