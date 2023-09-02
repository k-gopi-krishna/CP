#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int n,k;
	cin>>n>>k;
	k+=1;
	for (int i = 0; i < k; ++i)
	{
		/* code */
	
		string s,p="CLOSEALL";
		getline(cin,s);
		if(s.compare(p)==0)cout<<0<<endl;
		else cout<<s[s.length()-1]<<endl;
	}
	return 0;
}
