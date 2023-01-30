#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, tot = 0;
	scanf("%d", &t);
	while (t--) {
		double l, wd, d, w;
		scanf("%lf %lf %lf %lf", &l, &wd, &d, &w);
		if ((l <= 56 and wd <= 45 and d <= 25 or l+wd+d <= 125) and w <= 7) {
			printf("1\n"); 
			++tot;
		}
		else printf("0\n");
	}
	printf("%d\n", tot);
}
