#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
void print(int arr[][20], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)cout << arr[i][j] << " "; cout << endl;
	}
}
bool cansolve(int arr[][20], int n, int x, int y) {
	for (int i = 0; i < x; i++) {
		if (arr[i][y])return false;
	}
	int i = x, j = y;
	while (i >= 0 and j >= 0) {
		if (arr[i][j])return false;
		i--; j--;
	}
	i = x; j = y;
	while (i >= 0 and j < n) {
		if (arr[i][j])return false;
		i--; j++;
	}
	return true;
}
bool solve(int arr[][20], int n, int i) {
	if (i == n) {
		print(arr, n);
		return true;
	}
	for (int j = 0; j < n; j++) {
		if (cansolve(arr, n, i, j)) {
			arr[i][j] = 1;
			bool success = solve(arr, n, i + 1);
			if (success)return true;
			arr[i][j] = 0;

		}
	}
	return false;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr[20][20]={0};
	solve(arr, n, 0);
	return 0;
}