#include <iostream>
#include <string>
using namespace std;
main()
{
  int n;
  string s;
  cin>>n>>s;  

  int a=0,d=0,i=0;
  while (n--)
  {
    if (s[i]=='A')a++;
    else d++;
    i++;
  }
  if (a>d) cout<<"Anton"<<endl;
  else if(a<d) cout<<"Danik"<<endl;
  else cout<<"Friendship"<<endl;
}
