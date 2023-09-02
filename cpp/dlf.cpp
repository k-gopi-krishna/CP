#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n=1000;
	vector<int>arr(n,0);
	arr[0]=arr[1]=1;
	//here 0 indicates prime 
	for(int i=2;i<n;i++){
		if(!arr[i]){
			for(int j=i*i;j<n;j+=i)arr[j]=1;
		}
	}
	for(int i=0;i<233;i++){
		// if(!arr[i])cout<<i<<" ";
	}
	int q=10e9+7;
	cout<<q<<endl;

	return 0;
}