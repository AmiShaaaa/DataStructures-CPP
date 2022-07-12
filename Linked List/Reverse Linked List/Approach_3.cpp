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

// *********************************************

Node *reverse1(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *newHead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

Node *reverseLinkedList(Node *head)
{
    return reverse1(head);
}

// *********************************************

int main()
{

    return 0;
}