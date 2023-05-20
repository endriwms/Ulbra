using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace atividade02
{
  class Aluno : IPessoa
  {
    public string Nome { get; set; }
    public int Idade { get; set; }

    public Aluno(string nome, int idade)
    {
      Nome = nome;
      Idade = idade;
    }

    public void Falar()
    {
      Console.WriteLine($"Eu sou o aluno {Nome} e estou falando.");
    }
  }
}