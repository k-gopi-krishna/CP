#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int bin(int n){
	if(n<3)return n+1;
	/*
	explanation
	here if n=0 we get 1
	if n=1 we can use either 0 or 1
	if n=2 we get values 10,01,00 which total equals 3	
	if n=2 we get values 000,001,010,100,101
	which equals to 5

	*/
	else return bin(n-1)+bin(n-2);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	/*
	q) count the no of binary strings with 
	no * consecutive ones * that can be formed using
	 a binary string of lenght n
	*/

	int n;cin>>n;
	cout<<bin(n);
	return 0;
}