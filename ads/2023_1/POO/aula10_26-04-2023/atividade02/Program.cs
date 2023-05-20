using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace atividade02 
{ 
  class Program
  {
    static void Main(string[] args)
    {
      Professor prof = new Professor("João", 35);
      Aluno aluno = new Aluno("Pedro", 18);

      Escola escola = new Escola();
      escola.ApresentarPessoa(prof); // apresenta o professor João
      escola.ApresentarPessoa(aluno); // apresenta o aluno Pedro
    }
  }
}

