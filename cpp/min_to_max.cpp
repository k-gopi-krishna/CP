#include <map>
#include <iostream>
#include <climits>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		int arr[n];
		map<int, int>mp;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			mp[arr[i]]++;
		}
		int minv = INT_MAX;
		for (auto i : mp) {
			minv = min(minv, i.first);
		}
		cout << n - mp[minv] << endl;

	}
	return 0;
}
