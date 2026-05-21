// https://codeforces.com/problemset/problem/1182/B
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int h,w;
  cin>>h>>w;
  cin.ignore();
  vector<vector<char>> mp(h, vector<char>(w));

  for (int i=0; i<h; ++i)
  {
    string s;
    getline(cin, s);
    for (int j=0; j<w; ++j)
      mp[i][j] = s[j];
  }

  pair<int, int> center = {-1, -1};
  for (int i=1; i<h-1; ++i)
  {
    for (int j=1; j<w-1; ++j)
    {
      if (mp[i][j] == '*' &&
          mp[i - 1][j] == '*' &&
          mp[i + 1][j] == '*' &&
          mp[i][j - 1] == '*' &&
          mp[i][j + 1] == '*')
      {
        center = {i, j};
        break;
      }
    }
    if (center.first != -1) break;
  }

  if (center.first == -1)
  {
    cout << "NO\n";
    return 0;
  }

  int cx = center.first, cy = center.second;

  mp[cx][cy] = '-';
  for (int i=cx-1; i>=0 && mp[i][cy] == '*'; --i) mp[i][cy] = '-';
  for (int i=cx+1; i<h && mp[i][cy] == '*'; ++i) mp[i][cy] = '-';
  for (int j=cy-1; j>= 0 && mp[cx][j] == '*'; --j) mp[cx][j] = '-';
  for (int j=cy+1; j<w && mp[cx][j] == '*'; ++j) mp[cx][j] = '-';

  for (int i=0; i<h; ++i)
    for (int j=0; j<w; ++j)
      if (mp[i][j] == '*')
      {
        cout << "NO\n";
        return 0;
      }

  cout << "YES\n";
  return 0;
} 
