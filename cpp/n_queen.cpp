#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
void printb(int n, int board[][20])
{

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)cout << board[i][j] << " ";
		cout << endl;
	}
}
bool canplace(int board[][20], int n, int x, int y) {
	//for column
	for (int i = 0; i < x; i++) {
		if (board[i][y] == 1)return false;
	}
	int i = x, j = y;
	//for left diagonal
	while (i >= 0 and j >= 0) {
		if (board[i][j] == 1)return false;

		i--; j--;
	}
	//for right daigonal
	i = x;
	j = y;
	while (i >= 0 and j < n) {
		if (board[i][j] == 1)return false;
		i--; j++;
	}
	return true;
}
bool n_queen(int n, int board[][20], int i) {
	if (i == n) {
		//base case
		printb(n, board);
		return true;
	}
	//rec case
	//trying to place queen in every row
	for (int j = 0; j < n; j++) {
		//check whether the i,j is safe or not
		if (canplace(board, n, i, j)) {
			board[i][j] = 1;
			bool success = n_queen(n, board, i + 1);
			if (success)return true;
			//backtrack
			board[i][j] = 0;
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
	int arr[20][20]={0};
	 int n; cin >> n;
	n_queen(n,arr,0);
	return 0;
}