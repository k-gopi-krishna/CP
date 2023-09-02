#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define endl '\n'
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";print(x);cerr<<endl;
#else
#define debug(x)
#endif
void print(int a) {cerr << a;}
void print(bool a) {cerr << a;}
void print(string a) {cerr << a;}
void print(double a) {cerr << a;}
void print(char a) {cerr << a;}
template<class T> void print(vector<T>arr) {for (T i : arr) {print(i); cerr << " ";}}
template<class T> void print(set<T>arr) {for (T i : arr) {print(i); cerr << " ";}}
template<class T> void print(unordered_set<T>arr) {for (T i : arr) {print(i); cerr << " ";}}
template<class T, class V> void print(unordered_map<T, V>arr) {cerr<<endl;for (auto i : arr) {print(i.first); cerr << " "; print(i.second); cerr << endl; cerr << " ";}}
template<class T, class V> void print(map<T, V>arr) {cerr<<endl<<"a\tb" <<endl;for (auto i : arr) {print(i.first); cerr << "\t"; print(i.second); cerr << endl; cerr << " ";}}
void solve(){
	int x1,x2,x3,x4,y1,y2,y3,y4;
	int minval;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	int val1=(sqrt(pow(y2-y1,2)))*sqrt(pow(x2-x1,2));
	int val2=sqrt(pow(y4-y3,2))*sqrt(pow(x4-x3,2));
	if(x3>x1 and (x3>x2) or (x4<x1 and x4<x2) or (y3>y1 and y3>y2) or (y4<y1 and y4<y2)){
		minval=0;
	}
	else{
		minval=abs((max(x3,x1)-min(x2,x4))*(max(y3,y1)-min(y2,y4)));
	}
	cout<<val1+val2-minval<<endl;

}
int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
	#ifndef ONLINE_JUDGE
	freopen("error.txt","w",stderr);
	#endif
	int t;cin>>t;
		while(t--){
		solve();	
	}
	
	return 0;
}