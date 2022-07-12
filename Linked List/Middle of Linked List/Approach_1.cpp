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

// traverse to get length
int getLength(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

Node *findmiddle(Node *head)
{
    int len = getLength(head);
    int ans = (len / 2);

    Node *temp = head;
    int count = 0;
    while (count < ans)
    {
        temp = temp->next;
        count++;
    }

    return temp;
}

int main()
{

    return 0;
}