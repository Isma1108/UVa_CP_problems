#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, c = 1;
	cin >> t;

	while (t--) {
		vector<string> s(10);
		vector<int> v(10);
		int max_value = -1;

		for (int i = 0; i < 10; ++i) {
			cin >> s[i] >> v[i];
			max_value = max(max_value, v[i]);
		}

		cout << "Case #" << c++ << ":\n";
		for (int i = 0; i < 10; ++i) {
			if (v[i] == max_value) cout << s[i] << "\n";
		}
	}
}
