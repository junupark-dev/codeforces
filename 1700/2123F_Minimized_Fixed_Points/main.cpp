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
	int n, i, j;
	cin >> n;
	int p[n + 1];
	for (i = 1; i <= n; ++i) {
		p[i] = i;
	}
	for (i = 2; i <= n / 2; ++i) {
		j = i + i;
		if (p[i] == i) {
			swap(p[i], p[j]);
			j += i;
		}
		while (j <= n) {
			if (p[j] == j) {
				swap(p[i], p[j]);
			}
			j += i;
		}
	}
	cout << 1;
	for (i = 2; i <= n; ++i) {
		cout << ' ' << p[i];
	}
	cout << '\n';
}
