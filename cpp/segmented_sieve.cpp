#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
#define  N 10000
vector <int>primes;
void ps(vector<int>&sieve) {
	sieve[0] = sieve[1] = 1;
	for (int i = 2; i <= N; i++) {
		if (!sieve[i]) {
			primes.push_back(i);
			for (int j = i * i; j <= N; j += i) {

				sieve[j] = 1;
			}
		}
	}

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int>sieve(N, 0);
	ps(sieve);
	int t;
	cin >> t;
	while (t--) {
		int m, n;
		cin >> m >> n;
		vector<int>segment(n - m + 1, 0);
		for (auto p : primes) {
			if (p * p > n)break; //stop when p^2>n
			int start = (m / p) * p;
			//start marking numbers as not prime
			//another case if p lies in between m and n then
			if (p >= m and p <= n)start = 2 * p;
			//else we need to find the nearest starting point

			for (int j = start; j <= n; j += p) {
				if (j < m)continue;
				segment[j - m] = 1;
			}
		}
		for (int i = m; i <= n; i++) {
			if (!segment[i - m] and i != 1)cout << i << " ";
		}
		// return 0;
	}
}