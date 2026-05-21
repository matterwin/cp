#include <iostream>
#include <string>
using namespace std;
main()
{
  string w;
  cin>>w;
  int abc[26]={0};
  int d=0;
  for (char c : w) abc[c-'a']++;
  for (int n : abc) if(n>0)d++;
  if (d%2)cout<<"IGNORE HIM!"<<endl;
  else cout<<"CHAT WITH HER!"<<endl;
}
