#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll f(ll n) {
	if (n/10 == 0) return n;	
	return n%10 + f(n/10);
}

ll g(ll n) {
	if (n/10 == 0) return n;
	return g(f(n));
}

int main() {
	ll n;
	while (scanf("%lld", &n), n != 0) {
		printf("%lld\n", g(n));
	}
}
