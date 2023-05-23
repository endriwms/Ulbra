public class Main {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        // Inserir elementos no início, meio e fim da lista
        list.insertAtBeginning(3);
        list.insertAtEnd(7);
        list.insertAtMiddle(1, 5);
        list.insertAtMiddle(2, 6);

        // Imprimir os elementos da lista
        System.out.println("Elementos da lista:");
        list.printList();

        // Ordenar os elementos utilizando o algoritmo de ordenação A
        list.sortUsingAlgorithmA();
        System.out.println("Elementos da lista após ordenação A:");
        list.printList();

        // Ordenar os elementos utilizando o algoritmo de ordenação B
        list.sortUsingAlgorithmB();
        System.out.println("Elementos da lista após ordenação B:");
        list.printList();
    }
}
