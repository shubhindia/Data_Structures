//program to insert a node at end

#include<bits/stdc++.h>
using namespace std;

//creation of node
class Node
{
public:
  int data;
  Node *next;
};

//function to print the linked list

void display(Node *n)
{
  while(n!=NULL)
  {
    cout<<n->data<<" ";
    n = n->next;
  }
}
//function to insert data into new node
void push(Node **head_ref, int new_data)
{
  Node *new_node = new Node();
  new_node->data= new_data;
  new_node->next = (*head_ref);
  (*head_ref)= new_node;
}

//function to insert the node at the given point

void insertAfter(Node *prev_node, int new_data)
{
  if(prev_node== NULL)
  {
    cout<<"Previous node cann not be null";
    return;
  }
  //create a new node
  Node *new_node = new Node();
  //insert data into new Node
  new_node->data= new_data;
  //point the new node's next to the next node (in our case it will be previous
  //element's next node because we are inseting after that previout node)
  new_node->next = prev_node->next;
  //point previous node's next to our new node so that it will become part of
  //the linked list
  prev_node->next= new_node;
}

int main()
{

Node *head = NULL;
push(&head, 1);
push(&head, 2);
insertAfter(head->next,3);
insertAfter(head->next,4);
insertAfter(head->next->next,5);
insertAfter(head->next,6);
display(head);
  return 0;

}
