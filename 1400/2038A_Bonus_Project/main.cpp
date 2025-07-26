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
  solve();
  return 0;
}

void solve() {
	int n, k;
	cin >> n >> k;
	int a[n + 1], b[n + 1], i;
	for (i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	for (i = 1; i <= n; ++i) {
		cin >> b[i];
	}
	int available[n + 1];
	available[n] = a[n] / b[n];
	for (i = n - 1; i >= 1; --i) {
		available[i] = (a[i] / b[i]) + available[i + 1];
	}

	// project is not finishable
	if (available[1] < k) {
		cout << 0;
		while (--n) {
			cout << ' ' << 0;
		}
		cout << '\n';
		return;
	}

	int curr;
	for (i = 1; i < n; ++i) {
		curr = k - available[i + 1];
		if (curr > 0) {
			cout << curr << ' ';
			k -= curr;
		} else {
			cout << 0 << ' ';
		}
	}
	cout << k << '\n';
}
