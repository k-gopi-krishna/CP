#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
		int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>s;
	    int a0=0,a1=0;
	    unordered_map<char,int>m;
	    	    int arr[n];

	    for(int i=0;i<2*n;i++){
	        if(s[i]=='1'){m[s[i]]=i;}
	        else a0++;
	    }

	}
	return 0;
}	