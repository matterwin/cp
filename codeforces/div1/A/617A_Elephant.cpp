#include <cmath>
#include <iostream>
using namespace std;
main()
{
  int x;
  cin>>x;
  int s=0;
  while (x>0)
  {
    x-=5; 
    s++;
  }
  cout<<s<<endl;
}
