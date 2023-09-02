// SOLVED IT!!
#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		while(n--){
			string s;
			cin>>s;
			int f=0,u=0,p=0;
			for(int i=0;i<m;i++){
				if(s[i]=='F')f++;
				else if(s[i]=='U')u++;
			else p++;
			}
			if((f>=x)or (f==(x-1))&&(p>=y))cout<<1;
			else cout<<0; 
		}
		cout<<endl;
	}
	return 0;
} 