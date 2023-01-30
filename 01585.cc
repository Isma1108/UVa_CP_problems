#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int ans = 0, o = 0;
		
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == 'O') ans += ++o; //increment before sum
			else o = 0;
		}
		cout << ans << "\n";
	}
}
