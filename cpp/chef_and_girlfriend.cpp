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
bool cmp(pair<int,int>a,pair<int,int>b){
	return a.second>b.second;
}
void solve() {
	int n, q; cin >> n >> q;
	inp(n);
	sort(arr,arr+n,greater<int>());
	vector<pair<int,int>>vt;
	while(q--){
		int a,b;cin>>a>>b;
		vt.push_back({a,b});
	}
	unordered_map<int,int>mp;
	for(auto i:arr)mp[i]=0;
	for(auto i:vt){
		for(int j=i.first;j<=i.second;j++){
			mp[j]++;
		}
	}
	vector<pair<int,int>>ans;
	for(auto i:mp){
		ans.push_back({i.first,i.second});
	}
	sort(ans.begin(),ans.end(),cmp);
	vector<int>final(n);
	int kk=0;
	int finalans=0;
	for(auto i:ans){
		final[i.first-1]=arr[kk++];
		finalans+=(final[i.first-1])*i.second;

	}
	cout<<finalans<<endl;
	for(auto i:final)cout<<i<<" ";
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