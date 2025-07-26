#include <bits/stdc++.h>

using namespace std;

void solve();
void erase_row(vector<int> &, vector<int> &, int);
void erase_col(vector<int> &, vector<int> &, int);

int main() {
  ios::sync_with_stdio(0);
  int i = 0, t;
  cin >> t;
  while (i++ < t)
  solve();
  return 0;
}

void solve() {
  int n, m, i, j, max = 0, num;
  cin >> n >> m;
  vector<vector<int>> matrix(n, vector<int>(m));
  vector<int> max_row, max_col;
  for (i = 0; i < n; ++i) {
    for (j = 0; j < m; ++j) {
      cin >> matrix[i][j];
      if (matrix[i][j] > max) {
        max = matrix[i][j];
        max_row.clear();
        max_col.clear();
        max_row.emplace_back(i);
        max_col.emplace_back(j);
      } else if (matrix[i][j] == max) {
        max_row.emplace_back(i);
        max_col.emplace_back(j);
      }
    }
  }
  num = max_row.size();
  vector<int> row(n, 0), col(m, 0);
  for (i = 0; i < max_row.size(); ++i) {
    ++row[max_row[i]];
    ++col[max_col[i]];
  }
  for (i = 0; i < n; ++i) {
    for (j = 0; j < m; ++j) {
      if (row[i] + col[j] - (matrix[i][j] == max) == num) {
        cout << max - 1 << endl;
        return;
      }
    }
  }
  cout << max << endl;
}
