#include<queue>
#include<iostream>
using namespace std;
int main()
{
  int count=0;
queue<int> myqueue;
myqueue.push(1);
myqueue.push(2);
myqueue.push(3);
myqueue.push(4);
myqueue.push(5);

while(!myqueue.empty()){
  myqueue.pop();
  count++;
}
cout<<""<<count<<"\n";

}
