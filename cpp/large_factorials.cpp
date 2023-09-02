#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
void multiply(vector<int>&a,int no,int &size){
	int carry=0;
	for(int i=0;i<size;i++){
		int product=a[i]*no+carry;
		a[i]=product%10;
		carry=product/10;
	}
	while(carry){
		a[size]=carry%10;
		carry/=10;
		size++;
	}
}
void bigfact(int n){
	vector<int>a(1000,0);
	a[0]=1;
	int size=1;
	for (int i = 2; i <=n; ++i)
	{
		multiply(a,i,size);
	}
	for (int i = n; i >=0; --i)
	{
		cout<<a[i];
	}cout<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int a;
	cin>>a;
	bigfact(a);

	return 0;
}