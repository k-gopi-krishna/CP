#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int r,c;
		cin>>r>>c;
		char arr[r][c];
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>arr[i][j];
			}
		}int s=0,p=0,o=0,n=0;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(arr[i][j]=='s' or arr[i][j]=='S')s++;
				if(arr[i][j]=='p' or arr[i][j]=='P')p++;
				if(arr[i][j]=='O' or arr[i][j]=='o')o++;
				if(arr[i][j]=='n' or arr[i][j]=='N')n++;

			}
		}
		// cout<<s<< " "<<p<<" "<<o<<" "<<n<<endl;
		if(s>0 and p>0 and n>0 and o>1)cout<<"There is a spoon!"<<endl;
	else cout<<"There is indeed no spoon!"<<endl;
	}
	return 0;
}