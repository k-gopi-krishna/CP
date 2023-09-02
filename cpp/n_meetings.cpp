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
bool compare(pair<int, int>a, pair<int, int>b) {
	return a.second < b.second;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
	int n; cin >> n;
	int start[n]; for (auto &i : start)cin >> i;
	int end[n]; for (auto &i : end)cin >> i;
	vector<pair<int, int>>vt;
	for (int i = 0; i < n; i++)vt.pb({start[i], end[i]});
	sort(vt.begin(), vt.end(), compare);
	int c = 1;
	int val = vt[0].second;
	for (int i = 1; i < n; i++) {
		if (vt[i].first >val) {
			++c;
			val=vt[i].second;
		}
	}
	cout<<c<<endl;
	return 0;
}