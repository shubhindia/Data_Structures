#include<stack>
#include<iostream>
using namespace std;

int main()
{
  int count=0;
stack<int> mystack;

mystack.push(1);
mystack.push(2);
mystack.push(3);
mystack.push(4);
mystack.push(5);

while(!mystack.empty())
{
  count++;
  mystack.pop();
}
cout<<count<<"\n"<<"Hello";

}
