using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Atividade05
{
    public class PagamentoBoleto : IServicoPagamento
    {
        public void EfetuarPagamento(double valor)
        {
            Console.WriteLine("Pagamento por boleto efetuado no valor de: " + valor);
        }

        public void EstornarPagamento(double valor)
        {
            Console.WriteLine("Estorno de pagamento por boleto no valor de: " + valor);
        }
    }
}