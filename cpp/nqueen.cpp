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
void print(vector<vector<int>>&arr){
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr.size();j++)cout<<arr[i][j]<<" ";
			cout<<endl;
	}
}
bool possible(vector<vector<int>>&arr,int n,int i,int j){
	for(int row=0;row<i;row++)
		if(arr[row][j])return false;
		int x=i,y=j;
		while(x and y){
			if(arr[x][y])return false;
			x--;y--;
		}
		while(i>=0 and j<n){
			if(arr[i][j])return false;
			i--,j++;
		}
		return true;
	
}
bool solve(vector<vector<int>>&arr,int n,int i){
	if(i==n)return 1;
	for(int j=0;j<n;j++){
		if(possible(arr,n,i,j)){
			arr[i][j]=1;
			bool success=solve(arr,n,i+1);
			if(success){
				return true;
			}
			arr[i][j]=0;
		}
	}
	return false;
}
int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
	#ifndef ONLINE_JUDGE
	freopen("error.txt","w",stderr);
	#endif
	int n;cin>>n;
	vector<vector<int>>arr(n,vector<int>(n,0));
	solve(arr,n,0);
	print(arr);

	return 0;
}