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
	int n;cin>>n;inp(n);
	int cnt[8]={0};
	for(auto i:arr)cnt[i]++;
	if(cnt[5]==0 and cnt[7]==0 and cnt[2]>=cnt[4] and cnt[1]==cnt[2]+cnt[3] and cnt[2]+cnt[3]==cnt[4]+cnt[6]){
		for(int i=0;i<cnt[4];i++){
			cout<<"1 2 4"<<endl;;
		}
		cnt[2]-=cnt[4];
		for(int i=0;i<cnt[2];i++)cout<<"1 2 6"<<endl;
		for(int i=0;i<cnt[3];i++)cout<<"1 3 6"<<endl;

	}else cout<<-1<<endl;
	return 0;
}