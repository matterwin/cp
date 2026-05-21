#include <iostream>
#include <string>
using namespace std;
main(int n){
  cin>>n;
  cin.ignore();
  int r=0;
  while(n--){
    string s;
    getline(cin,s); 
    if(s[1]=='+')r++;
    else r--;
  }
  cout<<r<<endl; 
}
