#include <bits/stdc++.h>
#include <bits/extc++.h>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
				tree_order_statistics_node_update> ost;

const int N = 2000001;
ost nums;
int lucky[N];

int main() {
	for (int i = 1; i < N; i += 2) nums.insert(i);
	for (ost::iterator it = ++nums.begin(); it != nums.end(); ++it) {
		int strike = *it;
		if (strike > nums.size()) break;
		for (int j = strike - 1; j < nums.size(); j += strike-1) {
			nums.erase(nums.find_by_order(j));
		}
	}
	for (ost::iterator it = nums.begin(); it != nums.end(); ++it) {
		lucky[*it] = 1;	
	}

	int n;
	int dp[N] = {0};

	while (scanf("%d", &n) != EOF) {
		//Two odd numbers always add up to even numbers
		if (n&1) printf("%d is not the sum of two luckies!\n", n); //Impossible for odds numbers
		else {
			if (not dp[n]) {
				dp[n] = -1;
				for (int i = n/2; i >= 1; --i) {
					if (lucky[i] and lucky[n-i]) {
						dp[n] = i;
						break;
					}
				}
			}
			if (dp[n] == -1) printf("%d is not the sum of two luckies!\n");
			else printf("%d is the sum of %d and %d.\n", n, dp[n], n-dp[n]);
		}
	}
}

