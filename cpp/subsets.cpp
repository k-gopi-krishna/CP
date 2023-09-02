#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
bool compare(string a,string  b){
	if(a.size()==b.size()){
		return a<b;
	}
	return a.size()<b.size();
}
void sybsets(char * in, char *out, int i, int j,vector<string>&lst) {
	if (in[i] == '\0') {
		out[j] = '\0';
		string temp=out;
		lst.push_back(temp);

		return;
	}
	//recursive case
	//including i th element
	out[j] = in[i]; //here we are including i ith element
	sybsets(in, out, i + 1, j + 1,lst); //and we are moving towards next iteration
	///excluding i th element
	sybsets(in, out, i + 1, j,lst); //we are not adding i th element and updating i th value but not j value
	//becaue we need subsets of i+1th element to (i.e b)
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char in[111], out[111];
	cin >> in;
	vector<string>lst;
	sybsets(in, out, 0, 0,lst);
	sort(lst.begin(),lst.end(),compare);
	for(auto i:lst)cout<<i<<" ";



	return 0;
}