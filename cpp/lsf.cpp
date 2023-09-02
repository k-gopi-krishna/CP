#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int ans=-1;
	sort(arr,arr+n,greater<int>());
	for(int i=0;i<n;i++){
		ans=max(ans,(i+1)*arr[i]);

	}
	cout<<ans<<endl;

		return 0;
}
