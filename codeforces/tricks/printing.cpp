#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void print_2d_matrix(vector<vector<T>>& matrix)
{
  cout << "\nmp:\n"; 
  for (auto r : matrix)
  {
    for (auto c : r)
      cout << c << " ";
    cout << endl;
  }
  cout << endl << endl;
}

