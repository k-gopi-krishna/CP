// solved it!


#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		for(int i=0;i<s1.size();i++){
			if(s1[i]==s2[i] and s1[i]=='W')cout<<"B";
			else if(s1[i]==s2[i] and s1[i]=='B')cout<<"W";

			else cout<<"B";		}
	}
	return 0;
}