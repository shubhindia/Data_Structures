#include<bits/stdc++.h>
using namespace std;

// Node creation

class Node
{
public:
  int data;
  Node *next;

};


//function to print the linked listNodes

void listNodes(Node *n)
{
  while(n !=NULL)
  {
    cout<<n->data<<" ";
    n= n->next;
  }

}

//driver program

int main()
{

  // initialise 3 nodes
  Node *head = NULL;
  Node *second = NULL;
  Node *third = NULL;

  //create 3 nodes
head = new Node();
second = new Node();
third = new Node();

// add value to nodes
head->data = 1;
head->next = second;

second->data = 2;
second->next = third;

third->data = 3;
third->next = NULL;

listNodes(head);

return 0;
}
