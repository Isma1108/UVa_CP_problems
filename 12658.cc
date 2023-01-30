#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int nums[n], idx = 0;
	char c;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 4*n; ++j) {
			cin >> c;
			if (i == 3 and c == '*') {
				if (j%4 == 1) nums[idx] = 1;
				else if (j%4 == 0) nums[idx] = 2;
				else nums[idx] = 3;
				++idx;
			}
		}
	}
	for (auto x : nums) cout << x;
	cout << "\n";
}
