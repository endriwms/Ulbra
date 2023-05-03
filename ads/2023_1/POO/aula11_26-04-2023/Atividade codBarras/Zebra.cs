using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Atividade_codBarras
{
    public class Zebra : IImpressoraDeCodigoDeBarras
{
    public int Resolucao { get; set; }
    public string TamanhoEtiqueta { get; set; }
    public string TipoEtiqueta { get; set; }

    public Zebra()
    {
        Resolucao = 600;
        TamanhoEtiqueta = "15x7";
        TipoEtiqueta = "Poliéster";
    }

    public void ImprimirEtiquetas(Produto produto)
    {
        // Implementação da impressão das etiquetas na impressora Zebra
        Console.WriteLine($"Imprimindo etiqueta para o produto {produto.Id} na impressora Zebra...");
    }
}

}