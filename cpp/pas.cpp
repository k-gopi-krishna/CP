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
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			if (i == j or j == 0)cout << 1 << " ";
			else {

				arr[line][i] = arr[line - 1][i - 1] +
				               arr[line - 1][i];
			}
		} cout << endl;
	}
	return 0;
}