#include <bits/stdc++.h>

#define PB push_back
#define EB emplace_back
#define REP(i, a, b) for (int i = a; i <= b; ++i)

using namespace std;

typedef long long ll;
typedef vector<int> vec;
typedef pair<int, int> pi;

void solve();

int main() {
  ios::sync_with_stdio(0);
	cin.tie(0);
  int t = 0, i;
  cin >> i;
  while (t++ < i)
  solve();
  return 0;
}

void solve() {
	string left, right;
	cin >> left >> right;
	int l = atoi(left), r = atoi(right), i, n = left.size();
	for (i = 0; i < n; ++i) {
		if (r - l > 1) {

		} else if (r - l) {

		}
	}
}
