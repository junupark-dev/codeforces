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
	int a[n + 1];
	int i, mex = -1, amex, sum = 1;
	vector<int> count(n + 1, 0);
	for (i = 1; i <=n; ++i) {
		cin >> a[i];
		++count[a[i]];
	}
	unordered_map<int, int> map;
	for (i = 0; i <= n; ++i) {
		if (count[i] == 0) {
			mex = i;
			break;
		}
		++map[count[i]];
	}
	count.resize(mex);
	amex = n - count.size();

	cout << 1;
	for (i = 1; i <= n; ++i) {
		--amex;
		sum -= (amex < 0);
		if (map.contains(i)) {
			sum += map[i];
		}
		cout << ' ' << sum;
	}
	cout << '\n';
}
