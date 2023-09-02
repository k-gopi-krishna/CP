// solved it!!

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
		int x,y,k,c=0;
		cin>>x>>y>>k;
		if(x==y)cout<<0<<endl;
		else{
			 float res=((float)(abs(x-y))/k);
			 cout<<ceil(res)<<endl;;


		}

	}
	return 0;
}