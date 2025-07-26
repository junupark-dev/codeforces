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

void operations(int, int, int, queue<pair<int, int>> &, int &);

void solve() {
  int n, i, j, count = 0, temp;
  cin >> n;
  vector<int> a(n), b(n);
	queue<pair<int, int>> queue;
  for (i = 0; i < n; ++i) { cin >> a[i]; }
  for (i = 0; i < n; ++i) { cin >> b[i]; }
	for (i = 1; i < n; ++i) {
		j = i;
		while (j > 0 && a[j - 1] > a[j]) {
			temp = a[j - 1];
			a[j - 1] = a[j];
			a[j] = temp;
			--j;
		}
		operations(1, i, j, queue, count);
	}
	for (i = 1; i < n; ++i) {
		j = i;
		while (j > 0 && b[j - 1] > b[j]) {
			temp = b[j - 1];
			b[j - 1] = b[j];
			b[j] = temp;
			--j;
		}
		operations(2, i, j, queue, count);
	}
	for (i = 0; i < n; ++i) {
		if (a[i] > b[i]) {
			queue.push({3, i + 1});
			count++;
		}
	}
	cout << count << endl;
	while (!queue.empty()) {
		cout << queue.front().first << ' ' << queue.front().second << endl;
		queue.pop();
	}
}

void operations(int array, int start, int end, queue<pair<int, int>> &queue, int &count) {
	for (int i = start - 1; i >= end; --i) {
		queue.push({array, i + 1});
		++count;
	}
}
