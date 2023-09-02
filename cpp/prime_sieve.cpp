#include <bits/stdc++.h>
#define ll long long
#define n 1000
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
void ps_reverse(vector<int>&sieve) {
	sieve[0] = sieve[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		if (!sieve[i]) {
			for (int j = i * i; j <= n; j += i) {
				sieve[j] = 1;
			}
		}
	}
}
int range_prime_optimised(int a, int b) {
	//count=csum[b]-csum[a];
	//and csum[i]=csum[i-1]+1;
	//where csum[0] and csum[1]=0
	// tc-->O(nloglogn+n+k)
	vector<int>arr(b + 1, 0);
	int c;
	arr[0] = arr[1] = 0;
	arr[2] = 1;
	for (int i = 2; i <= b; i++) {
		if (i) {
			arr[i] = arr[i - 1] + 1;
		}
		else {
			arr[i] = arr[i - 1];
		}
	}
	c = arr[b] - arr[a];

	return c;
}
void primerange(vector<int>sieve, int a, int b) {
	int c = 0;
	for (int i = a; i <= b; i++) {

		if (sieve[i]) {
			c++;
		}
	}
	cout << c << endl;
}
void primesieve(vector<int>&sieve) {
	//mark 0 and 1 as not prime
	sieve[0] = sieve[1] = 0;
	for (ll i = 2; i <= n; i++) {
		if (sieve[i]) {

			for (ll  j = i * i; j <= n; j += i) {
				sieve[j] = 0;
			}
		}
	}

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif
	vector<int>sieve(n, 0);
	ps_reverse(sieve);
	// ps_reverse(sieve);
	for (int i = 2; i < 100; i++) {
		if (!sieve[i])cout << i << " ";
	}
	// int a,b;
	// cin>>a>>b;
	// cout<<range_prime_optimised(a,b)<<endl;
	return 0;
}