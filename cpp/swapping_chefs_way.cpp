// solved it!

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
		cin>>n;
		string s;
		cin>>s;
		string s1=s;
		sort(s1.begin(),s1.end());
		if(s==s1)cout<<"YES"<<endl;
		else{
			int st=0,end=n-1;
			while(st<end){
				if(s[st]>s[end])
					swap(s[st],s[end]);
				st++;
				end--;
			}
			if(s==s1)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}