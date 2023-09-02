#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int c=1;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])c++;
        else arr[i]=arr[i-1];
    }
    cout<<c<<endl;

    }
    return 0;
}