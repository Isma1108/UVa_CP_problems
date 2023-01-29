#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		ll a, b;
		scanf("%lld %lld", &a, &b);
		if (a < b) printf("<\n");
		else if (a > b) printf(">\n");
		else printf("=\n");
	}
}
