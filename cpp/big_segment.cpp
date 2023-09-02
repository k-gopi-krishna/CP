#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <unordered_map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;cin>>n;

	int mina=INT_MAX;int maxb=-1;
	int minb=INT_MAX;int maxa=-1;
	vector<pair<int,int>>arr;
	while(n--){
		int a,b;cin>>a>>b;
		mina=min(a,mina);
		maxb=max(b,maxb);
		minb=min(b,minb);
		maxa=max(a,maxa);
		arr.push_back(make_pair(a,b));
	}
	int minv1=min(mina,minb);
	int maxv1=max(maxa,maxb);
	bool flag=0;
	int c=0;
	for(auto i:arr){ 
		if(i.first<=minv1 and i.second>=maxv1){
			flag=1;
			++c;
			break;
		}
		else c++;
	}
	

	if(flag)cout<<c<<endl;
	else
		cout<<-1<<endl;
	


	return 0;
}