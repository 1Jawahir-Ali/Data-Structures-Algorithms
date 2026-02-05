#include <iostream>              
using namespace std;           
// Define a Node structure
struct Node {
    int data;                    //store data
    Node* next;                  // pointer store address of next node
};
// Function to insert a node at the end of the circular linked list
Node* insertEnd(Node* head, int value) {
    Node* newNode = new Node();  // Dynamically allocate memory for a new node on heap
    newNode->data = value;       
    newNode->next = NULL;     

    // If the list is empty, create the first node
    if (head == NULL) {
        head = newNode;          // Make the new node as head (first node)
        newNode->next = head;    // Point the new node to itself to make it circular
        return head;             
    }
    // Otherwise, find the last node (whose next points to head)
    Node* temp = head;           // Start from head node
    while (temp->next != head) { // Traverse until reaching the last node
        temp = temp->next;       // Move to the next node
    }

    // Insert new node after the last node
    temp->next = newNode;        // Link the current last node to the new node
    newNode->next = head;        // Make new node's next point back to head (circular link)
    return head;                 // Return the head pointer (head remains unchanged)
}
// Function to display the circular linked list
void display(Node* head) {
    if (head == NULL) {         // Check if the list is empty
        cout << "List is empty!" << endl;
        return;                  
    }
    Node* temp = head;           // Start traversal from head
    cout << "Circular Linked List: ";
    do {
        cout << temp->data << " "; // Print current node's data
        temp = temp->next;         // Move to next node
    } while (temp != head);        // Stop when back at the head node (full circle)
    cout << endl;                
}
// Main function 
int main() {
    Node* head = NULL;         // Initialize head as NULL (empty list at start)
    // Insert nodes into the list
    head = insertEnd(head, 10);   // Insert node with value 10
    head = insertEnd(head, 20);   // Insert node with value 20
    head = insertEnd(head, 30);   // Insert node with value 30
    head = insertEnd(head, 40);   // Insert node with value 40
    // Display the circular linked list
    display(head);                // Expected output: Circular Linked List: 10 20 30 40
    return 0;                     // Return 0 ? indicates successful execution
}
