// Crie uma classe chamada "ContaBancaria" com os seguintes atributos públicos: numeroDaConta, saldo e titular. Crie métodos públicos para depositar, sacar e transferir dinheiro. Lembre-se de verificar se há saldo suficiente para realizar saques e transferências.

public class Main {
    public static void main(String[] args) {
        ContaBancaria conta1 = new ContaBancaria();
        conta1.numeroDaConta = 123;
        conta1.saldo = 1000;
        conta1.titular = "João";

        ContaBancaria conta2 = new ContaBancaria();
        conta2.numeroDaConta = 456;
        conta2.saldo = 500;
        conta2.titular = "Maria";

        conta1.depositar(500);
        conta1.sacar(200);
        conta1.transferir(300, conta2);
    }
}
