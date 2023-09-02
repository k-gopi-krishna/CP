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
		string s;
		cin>>s;
		int k=0,t=0,l=0;
			int n=s.size();
			for(int i=0;i<n;i++){
				if(s[i]=='.')k++;
				else{
					if(k>l){
						l=k;
						t++;
					}
					k=0;
				}
			}
			cout<<t<<endl;
	}
	return 0;
}	