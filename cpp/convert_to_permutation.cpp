// solved it!!


#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
	    int n,c=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        if(arr[i]!=i+1 and arr[i]<i+1){
	            c+=abs(i+1-arr[i]);
	        }
	        else if(arr[i]>i+1){
	            c=-1;
	            break;
	        }
	    }
	    cout<<c<<endl;
	}
		return 0;
}