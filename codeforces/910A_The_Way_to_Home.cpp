#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n, d;
  string s;
  cin >> n >> d >> s;
  int i = 0;
  int jumps = 0;
  while (i < n)
  {
    int j = i + d;
    while (i != j)
    {
       if (j >= n) j--;
       else if (s[j] == '0') j--;
       else 
         break;
    }

    if (j == i && i != n - 1)
    {
      jumps = -1;
      break;
    }

    i = j;
    jumps++;

    if (i == n - 1)
      break;
  }
  cout << jumps << endl;
  return 0;
}

