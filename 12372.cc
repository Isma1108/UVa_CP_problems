#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	int c = 1;
	scanf("%d", &t);
	while (t--) {
		int l, w, h;
		scanf("%d %d %d", &l, &w, &h);
		printf("Case %d: ", c++);
		if (l <= 20 && w <= 20 && h <= 20) printf("good\n");
		else printf("bad\n");
	}
}
