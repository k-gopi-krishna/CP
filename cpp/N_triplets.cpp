#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
bool isprime(int n){
	if(n==1)return 0;
	else{
		int c=0;
		for(int i=2;i<n;i++){
			if(n%i==0){c++;}
		}
		if(c>0)return 0;
		else return 1;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		if(isprime(n))cout<<-1<<endl;
		else{
			int c=0;
			for(int i=2;i<n;i++){
				if(c==3)break;
				if(n%i==0){c++;cout<<i<<" ";}
			}cout<<endl;


		}
	}
	return 0;
}