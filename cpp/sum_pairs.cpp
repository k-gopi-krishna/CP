#include <bits/stdc++.h>
using namespace std;
void pairs(vector<int>arr,int sum){
	unordered_set<int>s;
	for(int i=0;i<arr.size();i++){
		int val=sum-arr[i];
		if(s.find(val)!=s.end()){
			cout<<arr[i]<<","<<val<<endl;//after insertionn printing matched pairs
		}
		else{
			s.insert(arr[i]);//<--inserting the values in unordered set-->important step
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	vector<int>a={10,5,2,3,1,0,-6,9,11};
	pairs(a,1);
	return 0;
}