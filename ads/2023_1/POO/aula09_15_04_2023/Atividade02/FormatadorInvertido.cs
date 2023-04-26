using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Atividade02
{

    public class FormatadorInvertido : IFormatadorTexto
    {
        public string Formatar(string texto)
        {
            char[] charArray = texto.ToCharArray();
            Array.Reverse(charArray);
            return new string(charArray);
        }
    }
}