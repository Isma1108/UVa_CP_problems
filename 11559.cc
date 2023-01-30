#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, b, h, w;
	while (scanf("%d %d %d %d", &n, &b, &h, &w) != EOF) {
		bool possible = false;
		int price = INT_MAX;
		while (h--) {
			int p;
			scanf("%d", &p);

			for (int i = 0; i < w; ++i) {
				int temp; 
				scanf("%d", &temp);
				if (temp >= n and n*p <= b) {
					possible = true;
					price = min(price, n*p);
				}
			}
		}
		possible ? printf("%d\n", price) : printf("stay home\n");
	}
}
