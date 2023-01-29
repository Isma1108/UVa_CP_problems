#include <bits/stdc++.h>
using namespace std;

int one_digit(int n) {
	int ans = 0;	
	while (n > 0) {
		ans += n%10;
		n /= 10;
	}
	return ans;
}

double love(const string& s1, const string& s2) {
	int n1 = 0, n2 = 0;
	for (int i = 0; i < s1.size(); ++i) {
		char c = tolower(s1[i]);
		if (c >= 'a' && c <= 'z') n1 += c - 96;
	}
	for (int i = 0; i < s2.size(); ++i) {
		char c = tolower(s2[i]);
		if (c >= 'a' && c <= 'z') n2 += c - 96;
	}

	while (n1 >= 10) n1 = one_digit(n1);
	while (n2 >= 10) n2 = one_digit(n2);

	if (n1 > n2) swap(n1, n2);
	return (double) n1*100/n2;
}

int main() {
	string s1, s2;
	while (getline(cin, s1)) {
		getline(cin, s2);
		printf("%.2lf %%\n", love(s1, s2));
	}
}

