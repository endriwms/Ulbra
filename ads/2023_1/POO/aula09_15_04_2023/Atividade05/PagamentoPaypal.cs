using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Atividade05
{
    public class PagamentoPaypal : IServicoPagamento
    {
        public void EfetuarPagamento(double valor)
        {
            Console.WriteLine("Pagamento pelo Paypal efetuado no valor de: " + valor);
        }

        public void EstornarPagamento(double valor)
        {
            Console.WriteLine("Estorno de pagamento pelo Paypal no valor de: " + valor);
        }
    }
}