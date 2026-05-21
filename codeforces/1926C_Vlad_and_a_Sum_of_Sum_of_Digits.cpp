// https://codeforces.com/problemset/problem/1926/C
#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 200000;

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> digitSum(MAXN + 1, 0);
  vector<long long> prefixSum(MAXN + 1, 0);

  for (int i = 1; i <= MAXN; i++) 
  {
    digitSum[i] = digitSum[i / 10] + (i % 10);
    prefixSum[i] = prefixSum[i - 1] + digitSum[i];
  }

  int t;
  cin >> t;
  while (t--) 
  {
    int n;
    cin >> n;
    cout << prefixSum[n] << '\n';
  }

  return 0;
}

