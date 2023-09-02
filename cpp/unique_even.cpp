// here we have 3*n+1 of elements in the array
#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
void unq_using_map(int arr[],int n){
	unordered_map<int,int>m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	for(auto i:m){
		if(i.second==1)cout<<i.first<<endl;
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int arr[8];
	int n=8;
	inp;
	unq_using_map(arr,n);
	return 0;
}