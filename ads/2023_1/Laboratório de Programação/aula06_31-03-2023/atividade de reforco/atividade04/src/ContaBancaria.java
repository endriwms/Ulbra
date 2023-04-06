public class ContaBancaria {
    public int numeroDaConta;
    public double saldo;
    public String titular;

    public void depositar(double valor) {
        saldo += valor;
        System.out.println("Depósito de R$" + valor + " realizado com sucesso. Novo saldo: R$" + saldo);
    }

    public void sacar(double valor) {
        if (saldo >= valor) {
            saldo -= valor;
            System.out.println("Saque de R$" + valor + " realizado com sucesso. Novo saldo: R$" + saldo);
        } else {
            System.out.println("Saldo insuficiente para realizar o saque.");
        }
    }

    public void transferir(double valor, ContaBancaria destino) {
        if (saldo >= valor) {
            saldo -= valor;
            destino.saldo += valor;
            System.out.println("Transferência de R$" + valor + " realizada com sucesso para " + destino.titular + ". Novo saldo: R$" + saldo);
        } else {
            System.out.println("Saldo insuficiente para realizar a transferência.");
        }
    }
}
