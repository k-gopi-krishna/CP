//solved it

#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
string leftshift(string s){
	string str=s;
	char temp=s[0];
	for (int i = 0; i < s.length()-1; ++i)
	{
		/* code */str[i]=s[i+1];
	}
	str[s.length()-1]=temp;
	return str;
}
string rightshift(string s){
	string news=s;
	char temp=s[s.length()-1];
	news[0]=temp;
	for (int i = 0; i < s.length()-1; ++i)
	{
		news[i+1]=s[i];
	}
return news;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(leftshift(s) ==rightshift(s))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}