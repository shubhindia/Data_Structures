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
//function to inset data into new node
void push(Node **head_ref, int new_data)
{
  Node *new_node = new Node();
  new_node->data= new_data;
  new_node->next = (*head_ref);
  (*head_ref)= new_node;

}

int main()
{

Node *head = NULL;
push(&head, 1);
push(&head, 2);
display(head);
  return 0;

}
