using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Atividade01
{
    public class CartaoCredito : IPagamento
    {
        public void Pagar(double valor)
        {
            Console.WriteLine($"Pagamento realizado com cartão de crédito no valor de R${valor}");
        }
    }
}