using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Atividade02
{
    public class FormatadorMinusculo : IFormatadorTexto
    {
        public string Formatar(string texto)
        {
            return texto.ToLower();
        }
    }
}