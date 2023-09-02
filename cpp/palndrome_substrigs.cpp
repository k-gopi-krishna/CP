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
		string a,b;
		int c=0;
		cin>>a>>b;
		for (int i = 0; i < a.size(); ++i)
		{
			for (int j = 0; j < b.size(); ++j)
			{
				if(a[i]==b[j])c++;
			}
		}
		if(c>0)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}