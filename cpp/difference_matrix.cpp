#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
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
		int n;cin>>n;
		string s;cin>>s;
		if(n<3)cout<<s<<endl;
		else{
			int arr[n];
			for(int i=0;i<n;i++){
				if(i==0)arr[i]=1;
				else if(i>0 and s[i]==s[i-1]) arr[i]=arr[i-1]+1;
				else arr[i]=1;
			}
			for(int i=0;i<n;i++){
				if(arr[i]==1)cout<<s[i];
				if(i>0 and arr[i]%2==0 and arr[i+1]==1)cout<<s[i];
				else continue;

			}
			cout<<endl;
		}	
	}
	
	return 0;
}