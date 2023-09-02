//solved it!


#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int chartoint(char s){
    return int(s);
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ans=0;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
           int convert=s[i]-'a'+1;
           ans+=(convert*(i+1));
        }
        cout<<ans<<endl;
    }
    return 0;
}