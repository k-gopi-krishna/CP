
// -->solved it!! <---

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
		int arr[n];
		inp;
		int c=0;
		set<int>s;
		for(auto i:arr){s.insert(i);}
			for (auto it = s.begin(); it !=
                             s.end(); ++it)
        if(*it!=-1)c++;
		cout<<c<<endl;
}	return 0;
}