class LinkedList {
    private Node head;
    private Node tail;

    public LinkedList() {
        this.head = null;
        this.tail = null;
    }

    public void insertAtBeginning(int value) {
        Node newNode = new Node(value);

        if (head == null) {
            head = newNode;
            tail = newNode;
        } else {
            newNode.next = head;
            head.prev = newNode;
            head = newNode;
        }
    }

    public void insertAtMiddle(int position, int value) {
        if (position <= 0 || head == null) {
            insertAtBeginning(value);
        } else {
            Node newNode = new Node(value);
            Node current = head;
            int count = 1;

            while (current.next != null && count < position) {
                current = current.next;
                count++;
            }

            newNode.next = current.next;
            newNode.prev = current;
            if (current.next != null) {
                current.next.prev = newNode;
            }
            current.next = newNode;
            if (newNode.next == null) {
                tail = newNode;
            }
        }
    }

    public void insertAtEnd(int value) {
        Node newNode = new Node(value);

        if (tail == null) {
            head = newNode;
            tail = newNode;
        } else {
            newNode.prev = tail;
            tail.next = newNode;
            tail = newNode;
        }
    }

    public void sortUsingAlgorithmA() {
        // Algoritmo de ordenação A (bubble sort)
        boolean sorted = false;
        while (!sorted) {
            sorted = true;
            Node current = head;
            while (current != null && current.next != null) {
                if (current.value > current.next.value) {
                    int temp = current.value;
                    current.value = current.next.value;
                    current.next.value = temp;
                    sorted = false;
                }
                current = current.next;
            }
        }
    }

    public void sortUsingAlgorithmB() {
        // Algoritmo de ordenação B (exemplo: insertion sort)
        if (head == null || head.next == null) {
            return;
        }
        Node current = head.next;
        while (current != null) {
            Node temp = current;
            int tempValue = temp.value;
            while (temp.prev != null && temp.prev.value < tempValue) {
                temp.value = temp.prev.value;
                temp = temp.prev;
            }
            temp.value = tempValue;
            current = current.next;
        }
    }

    public void printList() {
        Node current = head;
        while (current != null) {
            System.out.print(current.value + " ");
            current = current.next;
        }
        System.out.println();
    }
}