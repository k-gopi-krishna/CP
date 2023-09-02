#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);

		string ans = "";
		int key = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				ans = ans + (char)toupper(s[key]) + ". ";
				key = i + 1;
			}
		}
		for (int i = key; i < s.size(); i++) {
			if (i == key) {
				ans = ans + (char)toupper(s[key]);
			}
			else {
				ans = ans + (char)tolower(s[i]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
