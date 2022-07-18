#include <iostream>
using namespace std;

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

Node *kReverse(Node *head, int k)
{
    // base case
    if (head == NULL)
        return NULL;

    // step 1: reverse first K nodes
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // step 2: call Recursion
    if (next != NULL)
        head->next = kReverse(next, k);

    // step 3: return head of reversed list
    return prev;
}

int main()
{
    return 0;
}