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
	int n;
	cin >> n;
	      int t;
	    if(n<=250000)
	      t=0;
	    else if(n<=500000)
	    {
	        t=(n-250000)*0.05;
	    }
	    else if(n<=750000)
	    {
	        t=12500+(n-500000)*0.1;
	    }
	    else if(n<=1000000)
	    {
	        t=12500+25000+(n-750000)*0.15;
	    }
	    else if(n<=1250000)
	    {
	        t=12500+25000+37500+(n-1000000)*0.2;
	    }
	    else if(n<=1500000)
	    {
	        t=12500+25000+37500+50000+(n-1250000)*0.25;
	    }
	    else
	    {
	        t=12500+25000+37500+50000+62500+(n-1500000)*0.3;
	    }
	    n-=t;
	    cout << abs(n) << "\n";

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