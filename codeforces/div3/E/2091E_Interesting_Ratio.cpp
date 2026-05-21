#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num) {
  if (num <= 1) return false;
  for (int i = 2; i <= sqrt(num); ++i)
    if (num % i == 0) return false;
  return true;
}

void solve() {
  int n;
  cin >> n;
  int count = 0;
  for (int a = 1; a <= n; ++a) {
    for (int p = 2; p <= n / a; ++p) {
      if (is_prime(p)) {
        int b = a * p;
        if (a < b && b <= n)
          ++count;
      }
    }
  }
  cout << count << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

