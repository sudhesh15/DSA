//maximum number occuring in string(maximum frequent character)
#include <iostream>
#include <algorithm>
#include <String>
using namespace std;

int main(){
  string str = "iiiiiiiiiiiiiiiiii";
  cout<<str<<endl;

  int freq[26]={0};

  for(int i=0;i<26;i++){
    freq[str[i]-'a']++;
  }
  //if s[i] is a then a-a is zero means at zero index i incresed its count which represent a

  char ans='a';
  int maxFreq = 0;
  
  for(int i=0;i<26;i++){
    if(freq[i]>maxFreq){
      maxFreq = freq[i];
      ans = i+'a';
    }
  }
  cout<<"Maximum Character is "<<ans <<" and it appeared "<<maxFreq<<" Times"<<endl;
  return 0;
}