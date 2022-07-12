#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

Node *findmiddle(Node *head)
{
    // empty or one node
    if (head == NULL || head->next == NULL)
        return NULL;
    // two nodes
    if (head->next->next == NULL)
        return head->next;
    // rest cases
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
            fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{

    return 0;
}