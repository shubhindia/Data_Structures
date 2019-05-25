#include<queue>
#include<iostream>
using namespace std;
int main()
{
  //initialise a queue
  queue<int> myqueue;

  //adding elements to the queue
  myqueue.push(2);
  myqueue.push(3);
  myqueue.push(4);

  while(!myqueue.empty()){
  cout<<" "<<myqueue.front();
  cout<<"\n";
  myqueue.pop();
}

  return 0;
}
