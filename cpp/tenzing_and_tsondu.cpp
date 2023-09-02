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
	int n,m;cin>>n>>m;
	int a1[n],a2[m];
	for(auto &i:a1)cin>>i;
	for(auto &i:a2)cin>>i;
	int sum1=0,sum2=0;
	for(int i=0;i<n;i++)sum1+=a1[i];
	for(int i=0;i<m;i++)sum2+=a2[i];
	if(sum1==sum2)cout<<"Draw"<<endl;
else if(sum1>sum2)cout<<"Tsondu"<<endl;
else cout<<"Tenzing"<<endl;
int val=3;int val2=5;
int val3=val|val2;
cout<<val3<<endl;
// cout<<3||5<<endl;
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