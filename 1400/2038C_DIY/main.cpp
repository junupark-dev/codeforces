#include <bits/stdc++.h>

#define PB push_back
#define EB emplace_back
#define REP(i, a, b) for (int i = a; i <= b; ++i)

using namespace std;

typedef long long ll;
typedef vector<int> vec;
typedef pair<int, int> pi;

void solve();
void result(int, int, int, int);

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
	int n, i;
	cin >> n;
	int a[n + 1];
	for (i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	int min = INT_MAX, max = INT_MIN, prev_min = INT_MAX, prev_max = INT_MIN;
	unordered_map<int, int> map;
	for (i = 1; i <= n; ++i) {
		++map[a[i]];
	}
	vector<int> v;
	for (auto e : map) {
		for (i = 0; i < e.second / 2; ++i) {
			v.emplace_back(e.first);
		}
	}
	if (v.size() < 4) {
		//Area of rectangle is 0 or it is degenerate.
		cout << "NO\n";
		return;
	}

	sort(v.begin(), v.end());
	max = v[v.size() - 1];
	min = v[0];
	prev_min = v[1];
	prev_max = v[v.size() - 2];

	if ((ll)(max - min) * (ll)(prev_max - prev_min) > (ll)(max - prev_min) * (ll)(prev_max - min)) {
		result(max, min, prev_max, prev_min);
	} else {
		result(max, prev_min, prev_max, min);
	}
}

void result(int a, int b, int c, int d) {
	cout << "YES\n";
	cout << a << ' ' << c << ' ' << a << ' ' << d << ' ';
	cout << b << ' ' << c << ' ' << b << ' ' << d << '\n';
}
