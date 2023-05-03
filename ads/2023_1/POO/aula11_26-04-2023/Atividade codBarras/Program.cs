using Atividade_codBarras;

namespace ImpressorasDeCodigoDeBarras
{
    class Program
    {
        static void Main(string[] args)
        {
            // Criação da lista de impressoras
            List<IImpressoraDeCodigoDeBarras> impressoras = new List<IImpressoraDeCodigoDeBarras>
            {
                new Elgin(),
                new Zebra()
            };

            // Solicitação do código de barras ao usuário
            Console.WriteLine("Informe o código de barras do produto:");
            string codigoBarras = Console.ReadLine();

            // Criação do objeto Produto
            Produto produto = new Produto
            {
                Id = 1,
                CodigoBarras = codigoBarras,
                Preco = 19.99
            };

            // Impressão das etiquetas em cada impressora da lista
            foreach (var impressora in impressoras)
            {
                impressora.ImprimirEtiquetas(produto);
            }

            Console.ReadKey();
        }
    }
}