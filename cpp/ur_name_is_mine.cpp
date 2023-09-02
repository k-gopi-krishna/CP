#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
void sol(string s1,string s2)
{
	int c=0,v=0;
	for (int i = 0; i < s1.length(); ++i)
	{
		for (int j = v; j < s2.length(); ++j)
		{
			if(s1[i]==s2[j]){c++;v=j+1;break;}

		}
	}
	if(c==s1.length())cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		if(s1.length()<s2.length())sol(s1,s2);
		else sol(s2,s1);
	}
	return 0;
}