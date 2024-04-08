fun main() {
  // Exemplo 1: CharGenerator
  val charGenerator = CharGenerator('a', 'z')
  println("Caractere aleatório: ${charGenerator.generate()}")

  // Exemplo 2: Pessoa
  val pessoa = Pessoa("João", 30)
  pessoa.caminhar()
  pessoa.falar()

  // Exemplo 3: Result
  val sucesso = Result.Sucesso("Operação concluída com sucesso!")
  val error = Result.Error("Erro ao realizar operação")
  val loading = Result.Loading

  println(sucesso)
  println(error)
  println(loading)

  // Exemplo 4: PessoaData
  val pessoaData = PessoaData("Maria", 28, "Engenheira", "123.456.789-00")
  val pessoaDataComNomeCompleto = pessoaData.copy(nome = "Maria Silva")
  println(pessoaDataComNomeCompleto)
}