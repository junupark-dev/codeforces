#include <bits/stdc++.h>

#define PB push_back
#define EP emplace_back
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
	int n, k, i, count = 0;
	cin >> n >> k;
	string s;
	cin >> s;
	for (i = 0; i < s.size(); ++i) {
		if (s[i] == '1') {
			++count;
		}
	}
	if (k >= count || k > n / 2) {
		cout << "Alice\n";
		return;
	}
	cout << "Bob\n";
}
