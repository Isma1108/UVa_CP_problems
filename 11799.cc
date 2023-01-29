#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, c = 1; 
	scanf("%d", &t);
	while (t--) {
		int n, ans = 0;
		scanf("%d", &n);
		while (n--) {
			int x; scanf("%d", &x);
			ans = max(ans, x);
		}
		printf("Case %d: %d\n", c++, ans);
	}	
}
