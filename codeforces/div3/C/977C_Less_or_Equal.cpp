#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int n, nn, k;
  cin>>n>>k;
  vector<int> arr(n);

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr.begin(), arr.end());

  if (k == 0) {
    if (arr[0] > 1)
      cout << arr[0] - 1 << endl;
    else
      cout << "-1" << endl;
    return 0;
  }

  if (k > n)
  {
    cout << "-1" << endl;
    return 0;
  }

  int last_elem = arr[k - 1];
  if (k < n && arr[k] == last_elem)
    cout << "-1" << endl;
  else
    cout << last_elem << endl;
}
