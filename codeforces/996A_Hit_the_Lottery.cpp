// https://codeforces.com/problemset/problem/996/A
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  
  int bill = 0;

  bill = (n / 100);
  n %= 100;

  bill += (n / 20);
  n %= 20;

  bill += (n / 10);
  n %= 10;

  bill += (n / 5);
  n %= 5;

  bill += (n / 1);
  n %= 1;

  cout << bill << endl;

  return 0;
}

