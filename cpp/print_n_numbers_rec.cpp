#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int dec(int n){
	if(n==0)return 0;
	cout<<n<<endl;
	dec(n-1);
}
int inc(int n){
	if(n==0)return  0;
	inc(n-1);
	cout<<n<<endl;

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	inc(n);
	return 0;
}