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
	int n;cin>>n;
	vector<vector<int>>arr(n,vector<int>(n-1));
	for(int i=0;i<n;i++)
		for(int j=0;j<n-1;j++)cin>>arr[i][j];
	unordered_map<int,int>mp;
	unordered_set<int>ans;
	vector<int>f(n);
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n;j++){
			mp[arr[j][i]]++;
			if(mp[arr[j][i]]==n-1){
				ans.insert(arr[j][i]);
				mp.erase(arr[j][i]);
				for(auto i:mp){
					ans.insert(i.first);
					temp=i.first;
				}
				mp.erase(temp);

			}
		}
	}
	int t=0;
	for(auto i:ans){
		f[t++]=i;
	}
	for(int i=n-1;i>=0;i--){
		cout<<f[i]<<" ";
	}
	cout<<endl;
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