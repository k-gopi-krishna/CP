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
template<class T, class V> void print(unordered_map<T, V>arr) {cerr << endl; for (auto i : arr) {print(i.first); cerr << " "; print(i.second); cerr << endl; cerr << " ";}}
template<class T, class V> void print(map<T, V>arr) {cerr << endl << "a\tb" << endl; for (auto i : arr) {print(i.first); cerr << "\t"; print(i.second); cerr << endl; cerr << " ";}}
void solve() {
	string s; cin >> s;
	string s1, s2;
	int v1=(s[0]-'0')*10+(s[1]-'0');
	int v2=(s[3]-'0')*10+(s[4]-'0');
	if(v1<=12 and v2<=12)cout<<"BOTH"<<endl;
	else if(v1>0 and v2<=12)cout<<"DD/MM/YYYY"<<endl;
	else cout<<"MM/DD/YYYY"<<endl;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif

	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}