#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, c = 1;
	while (scanf("%d", &n), n != 0) {
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			int t;
			scanf("%d", &t);
			if (t == 0) --ans;
			else ++ans;
		}
		printf("Case %d: %d\n", c++, ans);
	}
}
