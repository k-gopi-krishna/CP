// solved it


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
	string s;

	cin>>s;
	while(t--){
		string s1;
		cin>>s1;
		for(int i=0;i<s1.size();i++){
			if(s1[i]>='a' and s1[i]<='z'){
				cout<<s[s1[i]-'a'];
			}
			else if(s1[i]>='A' and s1[i]<='Z'){
				char j=toupper(s[s1[i]-'A']);
				cout<<j;
			}
			else if(s1[i]=='_')cout<<" ";
			else cout<<s1[i];
		}		
			cout<<endl;

	}
	return 0;
}