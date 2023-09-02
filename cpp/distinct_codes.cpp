#include <bits/stdc++.h>
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
		int c=0;
		cin>>s;
		map<string,int>m;
		for(int i=0;i<s.length()-1;i++){
			string a="";
			a+=s[i];
			a+=s[i+1];
			m[a]++;
		}
		for(auto i:m)c++;
			cout<<c<<endl;
	}
	return 0;
}