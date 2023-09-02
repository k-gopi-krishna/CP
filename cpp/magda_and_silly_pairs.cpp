#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int
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

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
	#ifndef ONLINE_JUDGE
	freopen("error.txt","w",stderr);
	#endif
	int t;cin>>t;
		while(t--){
		int n;cin>>n;
		int a1[n],b1[n];
		int sum=0;
		int a=0,b=0,c=0,d=0;
		for(int i=0;i<n;i++){
			cin>>a1[i];
			sum+=a1[i];
			if(a1[i]&1)a++;
			else b++;
		}	
		for(int i=0;i<n;i++){
			cin>>b1[i];
			sum+=b1[i];
			if(b1[i]&1)c++;
			else d++;
		}
		int rem=n-(min(a,c)+min(b,d));
		cout<<(sum-rem)/2<<endl;
	}
	
	return 0;
}