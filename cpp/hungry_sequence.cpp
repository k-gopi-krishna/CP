#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
using namespace std;
const int n = 10e7+1;

void prime_sieve(int arr[n]) {

	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (!arr[i]){
				for (int j = i * i; j <= n; j += i) {
					arr[j] = 1;
				}}
	}
	for(int i=2;i<=100000;i++){
		if(!arr[i])cout<<i<<" ";
	}


}
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[n]={0};
	prime_sieve(arr);	
	int c=0;
	int val; cin >> val;
	// for (int i = 2;; i++) {
	// 	if (!arr[i]) {
	// 		if(c==val)break;
	// 		else{cout << i << " ";
	// 					c++;}
	// 	}

	// }
	return 0;
}