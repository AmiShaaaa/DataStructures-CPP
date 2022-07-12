#include <iostream>
using namespace std;

// recursive approach [1] -->
// (converting iteration to resursion)
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void reverse(Node *&head, Node *curr, Node *prev)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    // pehle pointer assign kiya
    Node *forward = curr->next;
    reverse(head, forward, curr);
    // then curr->next ko NULL point karaya
    curr->next = prev;
}

Node *reverseLinkedList(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    reverse(head, curr, prev);
    return head;
}

int main()
{

    return 0;
}