#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
bool canplacebirds(int b,int n,vector<int>nests,int sep){
	int loc=nests[0];
	int birds=1;
	for (int i = 1; i < n; ++i)
	{
		int curr_loc=nests[i];
		if(curr_loc-loc>=sep){
			birds++;
			loc=curr_loc;
			if(birds==b)return true;
		}
	}
	return false;
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<int>nests={1,2,4,8,9};
	int n=nests.size();
	int s=0;
	// int b=2;
	b=3;
	int e=nests[n-1]-nests[0];
		int ans=-1;
	while(s<=e){
		int mid=(s+e)/2;
		bool canplace=canplacebirds(b,n,nests,mid);
		if(canplace){
			ans=mid;
			s=mid+1;
		}
		else e=mid-1;
	}	
	cout<<ans<<endl;
	return 0;
}