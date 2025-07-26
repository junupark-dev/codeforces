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

struct myComp {
	constexpr bool operator()(pi const& a, pi const& b) {
		return a.first > b.first;
	}
};

void solve() {
	int n, i, j, k;
	cin >> n;
	vector<vector<int>> towers(n);
	for (i = 0; i < n; ++i) {
		cin >> k;
		towers[i].resize(k);
		for (j = 0; j < k; ++k) {
			cin >> towers[i][j];
		}
	}

	priority_queue<pi, vector<pi>, myComp> pq;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < towers[i].size(); ++j) {
			pq.push({towers[i][j], i});
		}
	}

	int num_towers = 1;
	pi prev = pq.top(), curr;
	pq.pop();
	while (!pq.empty()) {
		curr = pq.top();
		pq.pop();
		num_towers += (prev.second != curr.second);
		prev = curr;
	}
	cout << num_towers - n << ' ' << num_towers - 1 << '\n';

/*
// split unsorted towers into sorted towers
	for (i = 0; i < towers.size(); ++i) {
		for (j = 1; j < towers[i].size(); ++j) {
			if (towers[i][j - 1] > towers[i][j]) {
				towers.EB(vector<int>(towers[i].begin(), towers[i].begin() + j));
				towers[i].erase(towers[i].begin(), towers[i].begin() + j);
				++split_count;
				j = 0;
			}
		}
	}
// split towers with overlapping range
	vector<pair<int, int>> ranges;
	for (i = 0; i < towers.size(); ++i) {
		auto it = ranges.begin();
		for (; it != ranges.end(); ++it) {
			//check for overlap with previous towers and stop?
		}
		if (it == ranges.end()) {
			ranges.emplace_back({towers[i].front(), towers[i].back()});
		} else {
			
		}
		
	}


	cout << split_count << ' ' << n + split_count - 1 << '\n';
*/
}
