#include <bits/stdc++.h>
using namespace std;
void unq_using_map(int arr[],int n){
	unordered_map<int,int>m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	for(auto i:m){
		if(i.second==1)cout<<i.first;
	}
}
int unq_optimised(int arr[],int n){
	// int n=arr.size();
	//here we are using xor operator
	int val_xor=0;
	for(int i=0;i<n;i++){
		val_xor=val_xor^arr[i];
	}
	return val_xor;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
		unq_optimised(arr);
	

	return 0;
}