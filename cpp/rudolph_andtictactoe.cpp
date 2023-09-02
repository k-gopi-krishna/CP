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
	int n=3;
	map<char,pair<int,int>>mp;
	vector<vector<char>>arr(n+1,vector<char>(n+1));
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			cin>>arr[i][j];
			
		}
	}
	char ans;
	if(arr[1][1]==arr[2][2] and arr[1][1]==arr[3][3])ans=arr[1][1];
	else if(arr[1][1]==arr[1][2] and arr[1][1]==arr[1][3])ans=arr[1][1];
	else if(arr[2][1]==arr[2][2] and arr[2][1]==arr[2][3])ans=arr[2][1];
	else if(arr[3][1]==arr[3][2] and arr[3][2]==arr[3][3])ans=arr[3][1];
	else if(arr[1][2]==arr[2][2] and arr[2][2]==arr[3][2])ans=arr[2][2];
	else if(arr[1][3]==arr[2][3] and arr[2][3]==arr[3][3])ans=arr[2][3];
	else if(arr[1][1]==arr[2][1] and arr[1][1]==arr[3][1])ans=arr[1][1];
	else if(arr[1][3]==arr[2][2] and arr[1][3]==arr[3][1])ans=arr[1][3];
	// else cout<<"DRAW"<<endl;	
	else ans='1';
	if(ans=='.' or ans=='1')cout<<"DRAW"<<endl;
	else cout<<ans<<endl;

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