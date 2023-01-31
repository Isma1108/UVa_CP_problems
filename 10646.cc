#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, c = 1;
	scanf("%d", &t);
	char cards[52][3];

	while (t--) {
		for (int i = 0; i < 52; ++i) scanf("%s", cards[i]);
		printf("Case %d: %s\n", c++, cards[32]);
	}
}
