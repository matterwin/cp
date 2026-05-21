#include <iostream>
using namespace std;
main()
{
  int k,n,w;
  cin>>k>>n>>w;
  int i=1;
  while (w)
  {
    n-=(k*i);
    i++;
    w--;
  }
  if (n>0) cout<<0<<endl;
  else cout<<n*-1<<endl;
}
