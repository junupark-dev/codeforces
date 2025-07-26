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
	int n;
	cin >> n;
	string s;
	cin >> s;
	int i, first = -1, last = -1, count = 0;
	vector<int> pos, left, right;
	for (i = 0; i < n; ++i) {
		if (s[i] == '*') {
			pos.EB(i);
		} else {
			left.EB(pos.size());
		}
	}
	for (auto e : left) {
		right.EB(pos.size() - e);
	}




	for (i = 0; i < n; ++i) {
		if (first == -1 && s[i] == '*') {
			first = i;
		}
		if (first >= 0 && s[i] == '.') {
			left.EB(count);
		}
		if (s[i] == '*') {
			last = i;
			++count;
		}
	}
	if (count < 2) {
		cout << 0 << '\n';
		return;
	}
	ll l = 0, r = 0;
	for (auto e : left) {
		l += e;
		r += count - e;
	}
	cout << min(l, r) << '\n';
}
