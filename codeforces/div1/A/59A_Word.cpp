#include <iostream>
#include <string>
using namespace std;
main()
{
  string s;
  cin>>s;
  int u=0,l=0;
  for(char c:s)
  {
    if(c>=65 && c<=90) u++;
    else l++;
  }
  for (int i=0;i<s.length();i++)
  {
    if (l>=u) s[i]=tolower(s[i]);
    else s[i]=toupper(s[i]);
  }
  cout<<s<<endl;
}
