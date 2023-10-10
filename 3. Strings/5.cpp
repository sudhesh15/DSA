#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main ()
{
  string str;
  cout<<"Enter a String: "<<endl;
  //getline(cin, str);
  //cout<<str<<endl;

  string str1(5, 'n');
  //cout<<str1<<endl;

  string str2 = "SudheshHollaV";
  //cout<<str2<<endl;

  //Different Functions of Strings

  string s1="fam";
  string s2="ily";
  //s1.append(s2);
  
  //cout<<s1+s2;

  //cout<<s1[1]<<endl;

  s1.clear();
  cout<<s1<<endl;

  if(s1.empty())
    cout<<"s1 is empty"<<endl;

  if(!s2.empty())
    cout<<"s2 is not empty"<<endl;

  string s3 = "abc";
  string s4 = "abc";
  cout<<"hi "<<s3.compare(s4)<<endl;
  if(s3.compare(s4) == 0){
    cout<<"Strings are Equal"<<endl;
  }

  string s5 = "hello";
  s5.erase(4,1);
  cout<<s5<<endl;

  string s6 = "hello";
  s6.erase(1,2);
  cout<<s6<<endl;

  string s7 = "hello";
  cout<<s7.find("ll")<<endl;

  string s8 = "hello";
  s8.insert(2, "lol");
  cout<<s8<<endl;

  cout<<s8.length()<<endl;

  for(int i=0;i<s8.length();i++){
    cout<<s8[i]<<" ";
  }

  cout<<endl;

  string s10 = "sudhesha";
  cout<<s10.substr(2,6)<<endl;

  //string to integer

  string s11 = "777";
  int x = stoi(s11);
  cout<<x<<endl;

 cout<< to_string(x)<<endl;

 string s12 = "xhuhdfilqgqiulegqilyuiheq";
 
 cout<<s12<<endl;
 sort(s12.begin(), s12.end());
 cout<<s12<<endl;


  return 0;
}