using associacoes;

City city = new City(11, "Torres");

Pessoa obj = new Pessoa(12,"Amanda",city);

obj.AddEndereco(new Endereco(1,"Avenida silva jardin, 227"));

foreach (var item in obj.Enderecos)
{
  
}
PessoaFisica fisica = new PessoaFisica(1212,"Silva",city,"1331313131313");
fisica.