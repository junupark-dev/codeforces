#include <bits/stdc++.h>

#define PB push_back
#define EP emplace_back
#define REP(i, a, b) for (int i = a; i <= ; ++i)

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
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	if (b < min(a, a ^ 1)) {
		cout << -1 << endl;
		return;
	}
	if (b < a) {
		cout << y << endl;
		return;
	}
	if (y > x) y = x;
	int n = (b - a) / 2, m = n;
	if (a & 1) {
		n += (b - a) % 2;
	} else {
		m += (b - a) % 2;
	}
	cout << n * x + m * y << endl;
}
