#include <bits/stdc++.h>
using namespace std;

int round(int i, int j) {
	if (i == j) return 0;
	return 1 + round((i+1)/2, (j+1)/2);
}

int main() {
	int n, i, j;
	while (cin >> n >> i >> j) {
		cout << round(i, j) << "\n";
	}
}
