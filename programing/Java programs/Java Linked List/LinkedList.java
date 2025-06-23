
public class LinkedList {
    public static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
        }
    }

    public static void main(String[] args) {
        Node n = new Node(12);
        System.out.println(n.data);
        System.out.println(n.next);
    }
}