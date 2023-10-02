//STL 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  //Vector - dynamic Array
  vector<int> v;
  cout<<"capacity of vector v is "<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"capacity of vector v is "<<v.capacity()<<endl;
  v.push_back(2);
  v.push_back(3);
  cout<<"Size of vector v is "<<v.size()<<endl;
  cout<<"Front Element "<<v.front()<<endl;
  cout<<"Back Element "<<v.back()<<endl;
  v.pop_back();
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  v.clear();
  cout<<"Size of vector v is "<<v.size()<<endl;
  //----------------------------------------------------------------------------------------------------//

  //Deque - double ended queue
  deque<int> d;
  d.push_back(0);
  d.push_front(1);
  for(int i=0;i<d.size();i++){
    cout<<d[i]<<" ";
  }
  cout<<endl;
  d.pop_back();
  for(int i=0;i<d.size();i++){
    cout<<d[i]<<" ";
  }
  d.push_back(2);
  cout<<endl;
  for(int i=0;i<d.size();i++){
    cout<<d[i]<<" ";
  }
  d.pop_front();
  cout<<endl;
  for(int i=0;i<d.size();i++){
    cout<<d[i]<<" ";
  }
  cout<<endl;
  cout<<d.at(0);
  cout<<endl;
  cout<<d.front();
  cout<<endl;
  cout<<d.back();
  cout<<endl;
  //----------------------------------------------------------------------------------------------------//

  //List
  list<int> l;
  l.push_back(2);
  l.push_front(1);
  l.push_back(3);
  l.push_back(4);
  for(int i:l){
    cout<<i<<" ";
  }
  l.pop_back();
  l.pop_front();
  cout<<endl;
  for(int i:l){
    cout<<i<<" ";
  }
  cout<<endl;
  //----------------------------------------------------------------------------------------------------//

  //Stack - LIFO
  stack<string> s;
  s.push("sudhesh");
  s.push("holla");
  s.push("voderhobli");
  cout<<s.top()<<endl;
  s.pop();
  cout<<s.top()<<endl;
  cout<<"Size of Stack "<<s.size()<<endl;
  cout<<"Is Stack Empty "<<s.empty()<<endl;
  //----------------------------------------------------------------------------------------------------//

  //Queue - FIFO
  queue<string> q;
  q.push("sudhesh");
  q.push("holla");
  q.push("voderhobli");
  cout<<q.front()<<endl;
  q.pop();
  cout<<q.front()<<endl;
  cout<<"Size of Queue "<<q.size()<<endl;
  cout<<"Is Queue Empty "<<q.empty()<<endl;
  //----------------------------------------------------------------------------------------------------//

  //Priority Queue - First Element is always the greatest
  priority_queue<int> max;
  max.push(1);
  max.push(2);
  max.push(3);
  max.push(4);

  int size = max.size();

  for(int i=0;i<size;i++){
    cout<<max.top()<<" ";
    max.pop();
  }

  cout<<endl;

  //Priority Queue - First Element is always the greatest but to get smallest declare in another way!
  priority_queue<int, vector<int>, greater<int> > min;
  min.push(1);
  min.push(2);
  min.push(3);
  min.push(4);

  int minsize = min.size();

  for(int i=0;i<minsize;i++){
    cout<<min.top()<<" ";
    min.pop();
  }
  cout<<endl;
  //----------------------------------------------------------------------------------------------------//

  //SET - Unique Elements
  set<int> set;
  set.insert(5);
  set.insert(2);
  set.insert(3);
  set.insert(4);

  for(int i : set){
    cout<<i<<" ";
  }
  cout<<endl;

  //----------------------------------------------------------------------------------------------------//
  //Map - Key value Pair

  map<int, string> mp;
  mp[1] = "Sudhesh";
  mp[2] = "Holla";
  mp.insert({3, "V"});

  for(auto i:mp){
    cout<<i.first<<" ";
  }

  for(auto i:mp){
    cout<<i.second<<" ";
  }
  cout<<endl;
  //----------------------------------------------------------------------------------------------------//

  //Algorithms
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);
  v1.push_back(4);

  cout<<"Binary Search "<<binary_search(v1.begin(),v1.end(), 2)<<endl;
  cout<<"Binary Search "<<binary_search(v1.begin(),v1.end(), 5)<<endl;

  //lower bound
  //upper bound

  //v.sort();
  
  int a=1;
  int b=2;
  swap(a,b);
  cout<<a<<" "<<b<<endl;

  string str = "abcd";
  reverse(str.begin(), str.end());
  cout<<str<<endl;


  return 0;
}