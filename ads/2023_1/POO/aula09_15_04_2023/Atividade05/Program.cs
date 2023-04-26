using Atividade05;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("");
        PagamentoCartao cartao = new PagamentoCartao();
        cartao.EfetuarPagamento(100.00);
        cartao.EstornarPagamento(50.00);
        Console.WriteLine("");

        PagamentoBoleto boleto = new PagamentoBoleto();
        boleto.EfetuarPagamento(200.00);
        boleto.EstornarPagamento(100.00);
        Console.WriteLine("");

        PagamentoPaypal paypal = new PagamentoPaypal();
        paypal.EfetuarPagamento(50.00);
        paypal.EstornarPagamento(25.00);
        Console.WriteLine("");
    }
}