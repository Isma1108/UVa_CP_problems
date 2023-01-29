#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, m;
		scanf("%d %d", &n, &m);
		int sol = (m/3)*(n/3);
		printf("%d\n", sol);
	}
}
