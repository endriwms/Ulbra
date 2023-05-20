using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Atividade01
{
    public class Boleto : IPagamento
    {
        public void Pagar(double valor)
        {
            Console.WriteLine($"Pagamento realizado com boleto bancário no valor de R${valor}");
        }
    }
}