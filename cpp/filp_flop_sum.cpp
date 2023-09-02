// #include <bits/stdc++.h>
#include <iostream>
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
	int n; cin >> n; inp(n);
	bool flag = 0;
	int pc=0,nc=0;
	for(auto i:arr){
		if(i==1)pc++;
		else nc++;
	}
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == arr[i + 1] and arr[i] == -1) {
			arr[i] *= -1;
			arr[i + 1] *= -1;
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		// swap(arr[0],arr[1]);
	int sum = 0;
	for (auto i : arr)sum += i;
	cout << -1*sum << endl;
return;
	}

	int sum = 0;
	for (auto i : arr)sum += i;
	cout << sum << endl;
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