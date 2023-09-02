#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int it,ij;
	vector<vector<int>>arr(5,vector<int>(5,0));
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1){it=i;ij=j;break;}
		}
	}
	int vali=abs(2-it);
	int val2=abs(2-ij);
	cout<<val2+vali<<endl;
	return 0;
}