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
		int n, k; cin >> n >> k;
		inp(n);
		int maxv = -1;
		int maxind = -1;
		for (int i = 0; i < n; i += 2) {
			if(maxv<arr[i]){
				maxv=arr[i];
				maxind=i;
			}
		}
		if(maxind==0 and arr[maxind+1]<arr[maxind]){
			swap(arr[maxind],arr[maxind+1]);
		}
		else if(maxind==n-1 and arr[maxind]>arr[maxind-1]){
			swap(arr[maxind],arr[maxind-1]);
		}
		else swap(arr[maxind],arr[maxind+1]);

		// cout << maxv << endl;
		int m = 0, t = 0;
		for (int i = 0; i < n; i++) {
			if (i & 1)t += arr[i];
			else m += arr[i];
		}
		// cout<<t<<" "<<m<<endl;
		if(t>m)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

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