#include <iostream>
using namespace std;
main()
{
  uint64_t t, n, k;
  cin>>t;
  while (t--)
  {
    cin>>n>>k;
    uint64_t a = n - 1;
    uint64_t d = k / a;
    uint64_t r = k % a;
    uint64_t ret = n * d + r;
    if (r == 0) ret--;
    cout << ret << endl;
  }
}
