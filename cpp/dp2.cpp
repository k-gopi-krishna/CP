#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'gameWinner' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING colors as parameter.
 */

string gameWinner(string colors) {

int w=0,b=0;
int n=colors.size();
int arr[n];
arr[0]=1;
for(int i=1;i<n;i++){
    if(colors[i]==colors[i-1])arr[i]+=arr[i-1];
    else arr[i]=1;
}
for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        if(colors[i]=='w')w+=arr[i]-2;
        else b+=arr[i]-2;
    }
}
if(colors[n-1]=='w' and arr[n-1]>2)w+=arr[n-1]-2;
else if(colors[n-1]=='b' and arr[n-1]>2)b+=arr[n-1]-2;
if(w>b)return "wendy";
else return "bob";





}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string colors;
    getline(cin, colors);

    string result = gameWinner(colors);

    fout << result << "\n";

    fout.close();

    return 0;
}
