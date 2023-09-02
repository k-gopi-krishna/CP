#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int ans;cin>>ans;
	int a1,a2,a3,a4;

	while(1){
		++ans;

		a1=ans/1000;
		a2=(ans%1000)/100;
		a3=(ans%100)/10;
		a4=ans%10;
		if(a1!=a4 and a1!=a2 and a1!=a3 and a2!=a3 and a2!=a4 and a3!=a4){
			cout<<a1<<a2<<a3<<a4<<endl;
			break;
		}
		else {
			continue;
			
		
		}



	}
	return 0;
}