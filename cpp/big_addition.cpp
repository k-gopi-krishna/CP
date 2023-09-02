#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
char digittochar(int c) {
	return c + '0';
}
int chartodigit(char c) {
	return c - '0';
}
string addnum(string s1, string s2) {
	if (s1.length() > s2.length())swap(s1, s2);
	string res = "";
	int carry = 0;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	for (int i = 0; i < s1.length(); i++) {
		int d1 = chartodigit(s1[i]);
		int d2 = chartodigit(s2[i]);
		int sum = d1 + d2 + carry;
		int op = sum % 10;
		carry = sum / 10;
		res.push_back(digittochar(op));

	}
	for (int i = s1.length(); i < s2.length(); i++) {
		int d2 = chartodigit(s2[i]);
		int sum = d2 + carry;
		int op = sum % 10;
		carry = sum / 10;
		res.push_back(digittochar(op));
	}
	if (carry)res.push_back('1');
	reverse(res.begin(), res.end());
	return res;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif
	string s1, s2;
	cin >> s1 >> s2;
	string result = addnum(s1, s2);
	cout << result << endl;
	return 0;
}