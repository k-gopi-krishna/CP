#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,m;cin>>n>>m;
	char arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)cin>>arr[i][j];
	}
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		if((i+j)&1 and (arr[i][j]!='-'))arr[i][j]='W';
		else if(!((i+j)&1) and (arr[i][j]!='-'))arr[i][j]='B';
	}
}
for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)cout<<arr[i][j];
	cout<<endl;
}

	return 0;
}