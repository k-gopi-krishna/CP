#include <bits/stdc++.h>

#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
bool issafe(int arr[9][9], int i, int j, int no) {
	//check for row and column
	int n = 9;
	for (int k = 0; k < n; k++) {
		if (arr[k][j] == no or arr[i][k] == no) {
			return false;
		}
	}
	//check for subgrid
	int sx = (i / 3) * 3;
	int sy = (j / 3) * 3;
	for (int x = sx; x < sx + 3; x++) {
		for (int y = sy; y < sy; y++) {
			if (arr[x][y] == no) {
				return false;
			}
		}
	}
	return true;
}

bool solve(int arr[][9], int i, int j, int n) {
	if (i == n) {
		//base case
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)cout << arr[i][j] << " ";
			cout << endl;
		}
		return true;
	}
	//recursive case

	//if we at end of the row now go to next row

	if (j == n) {
		return solve(arr, i + 1, 0, n);
	}
	if (arr[i][j] != 0) {
		//skip if the value at index i,j filled
		return solve(arr, i, j + 1, n);
	}

	//cell to be filled
	//try out all possibilites
	for (int no = 0; no <= n; no++) { 
		//check if its safe or not
		if (issafe(arr, i, j, no)) {
			arr[i][j] = no;
			bool subp = solve(arr, i, j + 1, no);
			if (subp) {
				return true;
			}
		}
	}
	//if no option works
	arr[i][j] = 0;
	return false;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n = 9;
	int mat[9][9] = {
		{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};
	if (! solve(mat, 0, 0, n))cout << "not exists" << endl;

	return 0;
}