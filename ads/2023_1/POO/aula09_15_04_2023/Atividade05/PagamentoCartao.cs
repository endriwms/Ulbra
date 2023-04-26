using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Atividade05
{
    public class PagamentoCartao : IServicoPagamento
    {
        public void EfetuarPagamento(double valor)
        {
            Console.WriteLine("Pagamento no cartão efetuado no valor de: " + valor);
        }

        public void EstornarPagamento(double valor)
        {
            Console.WriteLine("Estorno de pagamento no cartão no valor de: " + valor);
        }
    }
}