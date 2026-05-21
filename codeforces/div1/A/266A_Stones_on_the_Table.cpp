#include <iostream>
#include <string>
using namespace std;
main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int re=0;
  if(n!=1)
  {
    char l=0,r=1;
    while(r!=n)
    {
      if (s[l]==s[r])
      {
        r++;
        re++;
      }
      else 
      {
        l=r;
        r++;
      }
    }
  }
  cout<<re<<endl;
}
