// Defining a class to represent every element of the linked
// list
class Node {
    // Data will store in this node
    int data;
    // Reference of the next node
    Node next;

    // Constructor for creating a node with given data
    Node(int data)
    {
        this.data = data;
        // there is no next node initially
        this.next = null;
    }
}

// Main class to execute the code
public class link_list {
    public static void main(String[] args)
    {
        // Define the head of the linked list;
        Node head = new Node(10);
        // Inserting some elements in the list
        head.next = new Node(20);
        head.next.next = new Node(30);
        head.next.next.next = new Node(40);

        // Printing all elements of the singly linked list
        Node ptr = head;
        while (ptr != null) {
            System.out.print(ptr.data + " ");
            ptr = ptr.next;
        }
        System.out.println();
        System.out.println();
    }
}
