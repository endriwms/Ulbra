using Atividade03;

  ContaBancaria minhaConta = new ContaBancaria(12345);
  Show("Digite sua senha: ");
  var senha = Convert.ToInt64(Console.ReadLine());
  
  if (minhaConta.Numero == 12345 && senha == 1911) {
    Show("Acessando conta");
    Show("---------------");

    minhaConta.Depositar(1000);

    minhaConta.Sacar(500);
    minhaConta.Sacar(300);
    minhaConta.Sacar(200);
  } else {
    Show("Dados inválidos!");
  }

  void Show(string msg) {
    Console.WriteLine(msg);
  }
