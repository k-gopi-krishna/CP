#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n = 5; int m = 5;
	int arr[6][6];
	for (int i = 1; i < 6; i++)
		for (int j = 1; j < 6; j++)cin >> arr[i][j];
	int x = 0, maxi = 0;
	for (int a = 1 ; a <= 5 ; a++)
		for (int b = 1 ; b <= 5 ; b++)
			for (int c = 1 ; c <= 5 ; c++)
				for (int d = 1 ; d <= 5 ; d++)
					for (int e = 1 ; e <= 5 ; e++)
					{
						if (a * b * c * d * e == 120 && a + b + c + d + e == 15)
							x = arr[a][b] + arr[b][a] + arr[b][c] + arr[c][b] + 2* (arr[c][d] + arr[d][c] + arr[d][e] + arr[e][d]);
						if (x > maxi)maxi = x;
					}
					//If u trace the code u can know that a,b  and b,c speaks once and c,d and d,e speaks twice	
	cout << maxi;
	return 0;
}