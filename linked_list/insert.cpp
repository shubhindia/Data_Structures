#include<bits/stdc++.h>
using namespace std;

//linked list node
class Node
{
public:
int n;
int data;
Node *next;
};

//driver to insert 3 nodes to linked list
int main()
{

//delcare 3 nodes of the linked list
Node *head=NULL;
Node *second=NULL;
Node *third=NULL;

// add nodes in heap 
head = new Node();
second = new Node();
third = new Node();

// insert data and create link

head->data=1;
head->next = second;

second->data=2;
second->next  = third;

third->data = 3;
third->next = NULL; // last node of the linked list


return 0;

}

