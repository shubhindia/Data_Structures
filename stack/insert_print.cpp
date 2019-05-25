#include<iostream>
#include<stack>
using namespace std;
int main()
{
  stack<int> mystack;
  mystack.push(1);
  mystack.push(2);
  mystack.push(3);
  mystack.push(4);
  mystack.push(5);

  while(!mystack.empty())
  {
    cout<<mystack.top()<<" "<<"\n";
    mystack.pop();
  }
  return 0;

}
