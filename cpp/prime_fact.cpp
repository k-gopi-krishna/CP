#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
void factorise(int n){
	//tc==O(n)
	for(int i=2;i<=n;i++){
		if(n%i==0){
			int c=0;
			while(n%i==0){
				c++;
				n/=i;
			}
			cout<<i<<"^"<<c<<"* ";
		}
	}
}
void factorise_opt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int c=0;
			while(n%i==0){
				c++;
				n/=i;
			}
			cout<<i<<"^"<<c<<" ";
		}
	}
	if(n!=1){
		cout<<n<<"^"<<1<<endl;
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	factorise_opt(n);
	return 0;
}