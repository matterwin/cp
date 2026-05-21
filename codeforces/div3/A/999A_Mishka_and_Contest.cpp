#include <iostream>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int arr[n] = {0};
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  int l=0, r=n-1,ret=0;
  while (l <= r)
  {
    if (arr[l] <= k)
    {
      ret++;
      l++;
    }
    else if (arr[r] <= k)
    {
      ret++;
      r--;
    }
    else 
      break;
  }

  cout << ret << endl;
  return 0;
}
