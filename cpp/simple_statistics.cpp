#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    double sum=0;
	    for(int i=k;i<n-k;i++){
	        sum+=arr[i];
	    }
	    double avg=sum/(n-2*k);
	    cout<<fixed<<setprecision(6)<<avg<<endl;
	}
	return 0;
}