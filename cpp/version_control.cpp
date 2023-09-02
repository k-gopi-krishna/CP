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
		int n,m,k;
		cin>>n>>m>>k;
		int a1[m];
		int a2[k];
		for(int i=0;i<m;i++)cin>>a1[i];
		for(int i=0;i<k;i++)cin>>a2[i];
		vector<int>arr(0,k+m);
		set<int>ar;
	for(int i=0;i<m;i++)arr.push_back(a1[i]);
		for(int i=0;i<k;i++)arr.push_back(a2[i]);
			sort(arr.begin(),arr.end());
		int c=0;
			for(int i=0;i<m+k-1;i++){
				if(arr[i]==arr[i+1]){
					c++;
					i++;
				}
								
			}
			for(int i=0;i<m;i++)ar.insert(a1[i]);
		for(int i=0;i<k;i++)ar.insert(a2[i]);

			cout<<c<<" " <<n-ar.size()<<endl;

	}
	return 0;
}