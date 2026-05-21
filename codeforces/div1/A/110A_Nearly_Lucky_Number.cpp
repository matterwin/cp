#include <iostream>
#include <string>
using namespace std;
main()
{
  int fours=0,sevens=0;
  string s;
  cin>>s;
  for(char c : s)
  {
    if(c=='4')fours++;
    else if(c=='7')sevens++;
  }
  
  int c = fours+sevens;
  if (c==4 || c==7)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
