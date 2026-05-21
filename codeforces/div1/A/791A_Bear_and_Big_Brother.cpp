#include <iostream>
using namespace std;
main()
{
  int a,b;
  cin>>a>>b;
  int r=0;
  while(1)
  {
    if(a>b)break; 
    a*=3;
    b*=2;
    r++;
  }
  cout<<r<<endl;
}
