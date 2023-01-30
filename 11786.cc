#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string m;
		cin >> m;
		stack<int> s;
		int ans = 0;
		for (int i = 0; i < m.size(); ++i) {
			if (m[i] == '\\') s.push(i);
			else if (m[i] == '/' and !s.empty()) {
				ans += i - s.top();
				s.pop();
			}	
		}
		cout << ans << "\n";
	}
}
