#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	for(int i=0;i<n-1;i++){
		string s1,s2;
		cin>>s1;
	sort(s1.begin(),s1.end());

		set_intersection(s.begin(),s.end(),s1.begin(),s1.end(),back_inserter(s2));
		s=s2;
	}
	if(s.size()!=0)cout<<s<<endl;
	else cout<<"no such string"<<endl;
	return 0;
}