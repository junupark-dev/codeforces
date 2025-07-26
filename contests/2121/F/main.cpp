#include <bits/stdc++.h>

using namespace std;

void solve();

int main() {
  ios::sync_with_stdio(0);
  int t = 0, i;
  cin >> i;
  while (t++ < i)
  solve();
  return 0;
}

void cases(vector<long long> &, long long &, long long &, long long, long long, long long &);

void solve() {
	long long n, s, x, i, j;
	cin >> n >> s >> x;
	vector<long long> a(n + 1), larger(1, 0);
	a[0] = 0;
	for (i = 1; i < n + 1; ++i) {
		cin >> a[i];
		if (a[i] > x) {
			larger.emplace_back(i);
		}
	}
	larger.emplace_back(n + 1);
	long long result = 0;
	for (i = 0; i < larger.size() - 1; ++i) {
		cases(a, x, s, larger[i] + 1, larger[i + 1] - 1, result);
	}
	cout << result << endl;
}

void cases(vector<long long> &a, long long &max, long long &s, long long left, long long right, long long &result) {
	if (left > right) { return; }
	long long i, j;
	a[left - 1] = 0;
	for (i = left; i <= right; ++i) {
		a[i] = a[i - 1] + a[i];
	}
	long long max_count = 0;
	if (max == 0) { ++max_count; }
	for (i = left - 1; i < right; ++i) {
		for (j = i + 1; j <= right; ++j) {
			if (a[j] - a[j - 1] == max) { ++max_count; }
			if (a[j] - a[i] == s && max_count) {
				++result;
			}
		}
		if (a[i + 1] - a[i] == max) { --max_count; }
	}
}
