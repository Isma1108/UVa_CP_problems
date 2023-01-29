#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    double N, s;
    scanf("%lf", &N);
    while(N--) {
        scanf("%lf", &s);
        printf("%lld\n", (ll) ((-1+sqrt(1+8*s))/2));
    }
}
