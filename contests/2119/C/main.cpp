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
	ll n, l, r, k;
	cin >> n >> l >> r >> k;
	if (n & 1) {
		cout << l << '\n';
		return;
	}
	if (n == 2) {
		cout << -1 << '\n';
		return;
	}
	ll t = l, count = 0;
	while (t) {
		t = t >> 1;
		count++;
	}
	t = pow(2, count);
	if (r < t) {
		cout << -1 << '\n';
		return;
	}
	if (k == n || k == n - 1) {
		cout << t << '\n';
	} else {
		cout << l << '\n';
	}
}
