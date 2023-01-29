#include <bits/stdc++.h>
using namespace std;

int main() {	
	int t;
	scanf("%d", &t);

	while (t--) {
		int n;
		scanf("%d", &n);
		int prev, cur, ans = INT_MIN;
		int max_num;
		scanf("%d", &prev);
		
		for (int i = 1; i < n; ++i) {
			scanf("%d", &cur);
			ans = max(ans, prev - cur);
			if (cur > prev) prev = cur;
		}
		printf("%d\n", ans);
	}
}
