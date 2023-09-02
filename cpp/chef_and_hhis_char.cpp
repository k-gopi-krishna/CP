#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	 ll t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      ll n=s.length(),c=0;
      for(int i=0;i<=n-4;i++)
      {
         string p;
         p=p+s[i]+s[i+1]+s[i+2]+s[i+3];
         sort(p.begin(),p.end());
         if(p=="cefh")
         c++;
      }
	   if(c==0){
      cout<<"normal"<<endl;
     }
     else cout<<"lovely"<<" "<<c<<endl;
}
}

