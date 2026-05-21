#include <iostream>
#include <vector>
#include <algorithm> // for max

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  int ones = 0;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] == 1) ones++;
  }

  if (ones == n) {
    cout << n - 1 << endl;
    return 0;
  }

  vector<int> temp(n);
  for (int i = 0; i < n; i++) {
    temp[i] = (arr[i] == 1) ? -1 : 1;
  }

  // Kadane's
  int max_sum = 0, current_sum = 0;
  for (int i = 0; i < n; i++) {
    current_sum = max(temp[i], current_sum + temp[i]);
    max_sum = max(max_sum, current_sum);
  }

  cout << ones + max_sum << endl;
}

