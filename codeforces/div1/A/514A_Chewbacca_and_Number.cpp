#include <string>
#include <iostream>
using namespace std;
main()
{
  string x;
  cin>>x;
  for (char& c : x)
    if (c > '4')
      c = '9' - (c - '0');

  if (x[0] == '0') 
    x[0] = '9';

  cout << x << endl;
}
