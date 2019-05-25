#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main()
{
  //initialize empty map
  map<int, int >mymap;

  //insert elements in map
  mymap.insert(pair<int, int>(1, 10));
  mymap.insert(pair<int, int>(2, 20));
  mymap.insert(pair<int, int>(3, 30));
  mymap.insert(pair<int, int>(4, 40));
  mymap.insert(pair<int, int>(5, 50));
  mymap.insert(pair<int, int>(6, 60));
  mymap.insert(pair<int, int>(7, 70));
  mymap.insert(pair<int, int>(8, 80));
  mymap.insert(pair<int, int>(9, 90));
  mymap.insert(pair<int, int>(10, 100));

//iterator for pointing element
map<int, int>::iterator itr;
for(itr = mymap.begin(); itr!=mymap.end(); ++itr)
{
  cout << '\t' << itr->first
       << '\t' << itr->second << '\n';
}
cout<<endl;
  return 0;

}
