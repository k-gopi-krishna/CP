#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
		while(t--){
		int n;cin>>n;inp(n);
		if(n<3)cout<<0<<endl;
		else{
			unordered_map<int,int>mp;
			for(auto i:arr)mp[i]++;
			int val=-1;
			int val1=-1;
		for(auto i:mp){
			if(val<i.second){
				val=i.second;
				val1=i.first;
			}
		}

		int c=0;
		for(int i=0;i<n;i++){
			if(arr[i]==val1)continue;
			else c++;
		}
		if(val==1)cout<<c-1<<endl;
		else
		cout<<c<<endl;



		}
	}
	
	return 0;
}