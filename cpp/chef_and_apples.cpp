// solved it!!1

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
		unordered_set<int>a;
		while(n--){
			int p;cin>>p;
			a.insert(p);
		}
	cout<<a.size()<<endl;
	}
	return 0;
}