using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Atividade_codBarras
{
    public class Elgin : IImpressoraDeCodigoDeBarras
    {
        public int Resolucao { get; set; }
        public string TamanhoEtiqueta { get; set; }
        public string TipoEtiqueta { get; set; }

        public Elgin()
        {
            Resolucao = 300;
            TamanhoEtiqueta = "10x5";
            TipoEtiqueta = "Papel adesivo";
        }

        public void ImprimirEtiquetas(Produto produto)
        {
            // Implementação da impressão das etiquetas na impressora Elgin
            Console.WriteLine($"Imprimindo etiqueta para o produto {produto.Id} na impressora Elgin...");
        }
    }

}