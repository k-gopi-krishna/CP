#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
bool issorted(int arr[],int n){
	if(n==0 or n==1)return true;
	if(arr[0]<arr[1]  and issorted(arr+1,n-1))return true;
		else return false;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int arr[]={1,2,3,44,4,5};
	cout<<	issorted(arr,5);
	
	return 0;
}