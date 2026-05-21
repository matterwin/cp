#include <iostream>
#include <string>
using namespace std;
main(int a){
  cin>>a;
  while(a--){
    string s;
    cin>>s;
    int n=s.length(); 
    if(n<=10) cout<<s<<endl;
    else cout<<s[0]<<n-2<<s[n-1]<<endl; 
  }
}
