#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s1, s2;
	cin >> s1 >> s2;
		
	stack<char> fd_jane, fd_john;
	string fu_jane, fu_john;
	
	for (int i = s1.size() - 1; i >= 0; --i) {
		fd_jane.push(s1[i]);
		fd_john.push(s2[i]);
	}

	int winner = 0;

	for (int i = 0; i < 1000; ++i) {
		char c_jane, c_john;
		c_jane = fd_jane.top();
		c_john = fd_john.top();
		fd_jane.pop();
		fd_john.pop();
		fu_jane.push_back(c_jane);
		fu_john.push_back(c_john);
		
		if (c_jane == c_john) {
			int r = random()/141%2;				
			if (r == 0) {
				fu_jane += fu_john;
				fu_john.clear();
				cout << "Snap! for Jane: ";
				for (int i = fu_jane.size()-1; i >= 0; --i) {
					cout << fu_jane[i];
				}
			}
			else {
				fu_john += fu_jane;
				fu_jane.clear();
				cout << "Snap! for John: ";
				for (int i = fu_john.size()-1; i >= 0; --i) {
					cout << fu_john[i];
				}
			}
			cout << "\n";
		}

		if (fd_jane.empty()) {
			if (fu_jane.size() == 0) {winner = 1; break;}
			else {
				for (int i = fu_jane.size()-1; i >= 0; --i) {
					fd_jane.push(fu_jane[i]);
				}
				fu_jane.clear();
			}
		}
		if (fd_john.empty()) {
			if (fu_john.size() == 0) {winner = -1; break;}
			else {
				for (int i = fu_john.size()-1; i >= 0; --i) {
					fd_john.push(fu_john[i]);
				}
				fu_john.clear();
			}
		}
	}
	if (winner == 0) cout << "Keeps going and going ...\n";
	else {
		if (winner == -1) cout << "Jane wins.\n";
		else cout << "John wins.\n";
	}
}	

int main() {
	int t, c = 1;
	cin >> t;
	while (t--) {
		if (c > 1) cout << "\n";
		solve();
		c++;
	}
}
