// https://codeforces.com/problemset/problem/1033/A
#include <iostream>
#include <vector>
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};

bool dfs(vector<vector<int>>& board, int i, int j, int cx, int cy)
{
  int n = board.size();
  if (i < 1 || i >= n || j < 1 || j >= n || board[i][j] == 1 || board[i][j] == 2)
    return false;
    
  if (i == cx && j == cy)
    return true;

  board[i][j] = 2;

  for (int d=0; d<8; ++d)
  {
    int x = i + dx[d];
    int y = j + dy[d];

    if (dfs(board, x, y, cx, cy)) return true;
  }

  return false;
}

int main()
{
  int n, ax, ay, bx, by, cx, cy;
  cin >> n >> ax >> ay >> bx >> by >> cx >> cy;

  vector<vector<int>> board(n+1, vector<int>(n+1, 0));
  for (int i=1; i <= n; i++)
  {
    board[i][ay] = 1;
    board[ax][i] = 1;
  }

  board[cx][cy] = 8;

  int diag_dx[] = {-1, -1, 1, 1};
  int diag_dy[] = {-1, 1, -1, 1};

  for (int dir = 0; dir < 4; ++dir) 
  {
    int x = ax;
    int y = ay;
    while (1) 
    {
      x += diag_dx[dir];
      y += diag_dy[dir];
      if (x < 1 || x >= n || y < 1 || y >= n) break;
      board[x][y] = 1;
    }
  }

  if (dfs(board, bx, by, cx, cy))
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}

