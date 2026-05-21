// https://codeforces.com/problemset/problem/948/A
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool dfs(vector<vector<char>> mp, int i, int j)
{
  // i + 1, i - 1, j + 1, j - 1
  int R = mp.size(), C = mp[0].size();
  if (i+1 < R && mp[i+1][j] == 'S')
    return true;
  if (i-1 >= 0 && mp[i-1][j] == 'S')
    return true;
  if (j+1 < C && mp[i][j+1] == 'S')
    return true;
  if (j-1 >= 0 && mp[i][j-1] == 'S')
    return true;

  return false;
}

int main()
{
  int R, C;
  cin >> R >> C;
  cin.ignore();
  vector<vector<char>> mp;

  string line;

  for (int i = 0; i < R; ++i)
  {
    getline(cin, line);
    vector<char> row;
    for (char c : line)
    {
      if (c == '.')
        row.push_back('D');
      else
        row.push_back(c);
    }
    mp.push_back(row);
  }

  for (int i = 0; i < R; i++)
  {
    for (int j = 0; j < C; j++)
    {
      if (mp[i][j] == 'W')
        if (dfs(mp, i, j))
        {
          cout << "No" << endl;
          return 0;
        }
    }
  }

  cout << "Yes" << endl;
  for (const auto& row : mp)
  {
    string s(row.begin(), row.end());
    cout << s << '\n';
  }
  return 0;
}

