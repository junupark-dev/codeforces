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
	ll n, px, py, qx, qy, i;
	cin >> n >> px >> py >> qx >> qy;
	ll a[n + 1];
	ll sum = 0;
	for (i = 1; i <= n; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	ll dx = abs(qx - px), dy = abs(qy - py);
	ll distance = dx * dx + dy * dy;
	sum -= a[n];
	ll add = a[n] + sum, sub = max((ll)0, a[n] - sum);
	if (distance <= add * add && distance >= sub * sub) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}
