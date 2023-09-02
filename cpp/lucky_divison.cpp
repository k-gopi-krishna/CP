#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;cin>>s;
	bool flag=0;
	for(char i:s){
		if(i=='4' or i=='7')continue;
		else {
			flag=1;
			break;
		}
	}
	int res=stoi(s);
	if(res%4==0 or res%7==0 or flag==0)cout<<"YES";
	else cout<<"NO";
	return 0;
}