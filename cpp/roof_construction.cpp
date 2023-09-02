

//to do


#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define pb push_back
// #define int long long
#define endl '\n'
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std; 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k = 0;
        while((1 << (k + 1)) <= n - 1) ++k; 
        for(int i = (1 << k) - 1; i >= 0; i--) {
            cout << i << ' ';
        }
        for(int i = (1 << k); i < n; i++) {
            cout << i << ' ';
        }
        cout << '\n';
    }
}