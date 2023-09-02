#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	string s;
	cin>>s;
	int n=s.length();
	for (int i = 0; i < n; ++i)
	{
		for (int j= 0; j < i; ++i)
		{
			/* code */for (int k = i	; k <= j; ++k)
				{
				/* code */cout<<s[k];
			}
		}
	}
	return 0;
}		