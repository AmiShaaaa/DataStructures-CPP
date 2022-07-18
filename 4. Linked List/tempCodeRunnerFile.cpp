void insertAtHead(Node *&head, int d)
// // Inserting "Before" the Head Node
// // reference is taken to avoid making copy
// // instead, it will make changes in the original address
// {
//     // new node create
//     Node *temp = new Node(d);
//     // pointer pointing null se hata k head ko point kara do
//     temp->next = head;
//     // head shift from initial to new inserted before it
//     head = temp;
// }