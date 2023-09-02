#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
vector<vector<char>>func(vector<char>&nums) {
	int n = nums.size();
	int sub_cnt = (1 << n);
	vector<	vector<char>>subsets;

	for (int mask = 0; mask < sub_cnt; mask++) {
		vector<char>subset;
		for (int i = 0; i < n; i++) {
			if ((mask & (1 << i)) != 0)subset.push_back(nums[i]);
		}
		subsets.push_back(subset);
	}
	return subsets;

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	vector<char>v(n);
	for (int i = 0; i < n; i++)cin >> v[i];
	auto ans = func(v);
	for (auto i : ans) {
		for (auto ele : i) {
			cout << ele;
		} cout << endl;

	}
	//note that this is inefficient as it takes O(n*2^n)
	//use backtracking method which takes less time
	return 0;

}