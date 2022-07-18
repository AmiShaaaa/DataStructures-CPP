#include <iostream>
using namespace std;

// Each node in a list consists of at least two parts :-->
// 1. A Data Item (we can store integer, strings or any type of data).
// 2. Pointer (Or Reference) to the next node (connects one node to another)
// or An address of another node

class Node
{
public:
    int data;
    Node *next;

    // constructor -->
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
// Inserting "Before" the Head Node
// reference is taken to avoid making copy
// instead, it will make changes in the original address
{
    // new node create
    Node *temp = new Node(d);
    // pointer pointing null se hata k head ko point kara do
    temp->next = head;
    // head shift from initial to new inserted before it
    head = temp;
}

void insertAtTail(Node *&tail, int d)
// Inserting "After" the Tail Node
{
    Node *temp = new Node(d);
    tail->next = temp; // because we have to insert after the tail
    tail = temp;
}

// traversing through linked list
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // created a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);

    return 0;
}