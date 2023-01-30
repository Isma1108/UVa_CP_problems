#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);

		int moves[n+1], ans = 0;
		for (int i = 1; i <= n; ++i) {
			string s;
			cin >> s;
			if (s == "LEFT") {moves[i] = -1; --ans;}
			else if (s == "RIGHT") {moves[i] = 1; ++ans;}
			else {
				int idx;
				cin >> s >> idx;
				moves[i] = moves[idx];
				ans += moves[i];
			}
		}	
		printf("%d\n", ans);
	}
}
