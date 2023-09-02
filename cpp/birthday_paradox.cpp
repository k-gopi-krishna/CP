#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int people = 1;
	float numerator = 365, den = 365;
	float prob_of_diff_bday = 1;
	while (1) {
		prob_of_diff_bday *= (numerator / den);
		if (prob_of_diff_bday < 0.5)break;
		numerator -= 1;
		people++;
	}
	/*
	here for 1 person 
	p=365/365
	for 2 persons p=(365/365)*(364/365)
	for 3 persons p=(365/365)*(364/365)*(363/365)
	for n persons
		p=(365/365)*(364/365)*....(365-people+1)/365
	for every increase in person (people++) ther is a unit decrease in numerator(numerator--)
	thats what we are calculating
	here we took while loop condition <0.5 because in question 
	they mentioned 50% chance

	*/
	cout << people << endl;
	return 0;
}