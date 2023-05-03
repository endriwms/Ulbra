using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Atividade_codBarras
{
    public interface IImpressoraDeCodigoDeBarras
    {
        void ImprimirEtiquetas(Produto produto);
    }

    public class Produto
    {
        public int Id { get; set; }
        public string CodBarras { get; set; }
        public double Preco { get; set; }
        public string CodigoBarras { get; internal set; }
    }

}