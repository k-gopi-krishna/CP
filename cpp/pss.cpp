#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
#define n 1000
void solve(vector<int>&arr){
  arr[0]=arr[1]=1;
  for(int i=2;i<n;i++){
  	if(arr[i]==0){
  		for(int j=i*i;j<n;j+=i){
  			arr[j]=1;
  		}
  	}
  }

}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<int>arr(n,0);
	solve(arr);
	for(int i=0;i<123;i++){
		if(!arr[i])cout<<i<<" ";
	}
	return 0;
}