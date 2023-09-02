// ---> sloved it!<----


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
		string s1,s2;
		cin>>s1>>s2;
		map<char,int>m1,m2;
		for(auto i:s1)m1[i]++;		
		for(auto i:s2)m2[i]++;
		int count=0;
		for(int i=43;i<123;i++){
			count+=min(m1[i],m2[i]);
		}		
		cout<<count<<endl;
	}
	return 0;
}