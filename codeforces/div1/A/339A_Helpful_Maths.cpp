#include <iostream>
#include <string>
using namespace std;
main(){
  string s;
  cin >> s;
  int f[4] = {0};
  for (char c : s) {
    if (c=='+') continue;
    f[c-'0']++;
  }

  s = "";
  for (int i=1; i<4; i++) {
    string j = to_string(i);
    while (f[i]--) {
      s+=j;
      s+="+";
    }
  }
  s.pop_back();
  cout << s << endl;
}
