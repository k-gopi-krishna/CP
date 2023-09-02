#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
     int a[] = {1, 2, 3, -1, -2, 4};
    int n = sizeof(a) / sizeof(a[0]);

    vector<int> pos, neg, zero;

    // separate positive, negative and zero elements
    for(int i = 0; i < n; i++) {
        if(a[i] > 0)
            pos.push_back(a[i]);
        else if(a[i] < 0)
            neg.push_back(a[i]);
        else
            zero.push_back(a[i]);
    }

    // sort positive and negative vectors
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end(), greater<int>());

    // concatenate vectors
    vector<int> result(pos.size() + neg.size() + zero.size());
    auto it = copy(pos.begin(), pos.end(), result.begin());
    it = copy(neg.begin(), neg.end(), it);
    copy(zero.begin(), zero.end(), it);

    // print the result
    for(int x: result)
        cout << x << " ";
    cout << endl;
    return 0;
}