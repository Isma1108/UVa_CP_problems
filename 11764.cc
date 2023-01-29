#include <bits/stdc++.h>
using namespace std;

int main() { 
	int t, c = 1;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int prev, h = 0, l = 0;
		scanf("%d", &prev);
		for (int i = 1; i < n; ++i) {
			int x; scanf("%d", &x);	
			if (x > prev) ++h;
			else if (x < prev) ++l;
			prev = x;
		}
		printf("Case %d: %d %d\n", c++, h, l);
	}
}
