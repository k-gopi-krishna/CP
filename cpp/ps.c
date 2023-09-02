#include <stdio.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
// using namespace std;
void sol(int * arr){
	arr[0]=arr[1]=1;
	for(int i=2;i<=100;i++){
		if(arr[i]!=1){
			for(int j=i*i;j<100;j+=i){
				arr[j]=1;
			}
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int arr[1000]={0};

sol(arr);
for(int i=0;i<60;i++){
	// if(arr[i]==0){
		printf("%d\n",arr[i]);
	// }
	return 0;
}
}