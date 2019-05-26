#include<bits/stdc++.h>
using namespace std;


//declare a node class to create a node in linked list
class Node
{
public:
  int data;
  Node *next;
};

//function to insert data into linked list

void push(Node **head_ref, int new_data)
{
  Node *new_node = new Node();
  new_node->data= new_data;
  new_node->next = (*head_ref);
  (*head_ref)= new_node;
}

//function to delete given nodes

void deleteNode(Node **head_ref, int key)
{
  //crate a temporary node to hold the node which is to be deleted
  Node *temp = *head_ref, *prev;
// search for the node which is to be deleted
  while(temp != NULL && temp->data !=key )
  {
    prev = temp;
    temp = temp->next;
  }

//unlink the node from the linked list and free the memory
  prev->next = temp->next;
  free(temp);//free momory
}


void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<node->data;
        node = node->next;
    }
}


int main()
{
  Node *head = NULL;

  push(&head,2);
  push(&head,3);
  push(&head,4);
  push(&head,5);
cout<<"Before Deleting\n";
  printList(head);

cout<<"After deleting\n";
  deleteNode(&head,3);
  printList(head);
  return 0;
}
