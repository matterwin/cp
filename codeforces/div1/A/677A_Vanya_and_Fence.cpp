#include <iostream>
using namespace std;
main()
{
  int n, h;
  cin>>n>>h;

  int ret = 0;
  int a;
  while (n--)
  {
    cin >> a;
    if (a > h) ret +=2;
    else ret++;
  }
  cout << ret << endl;
}
