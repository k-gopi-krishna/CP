#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int ways(int x,int n, string s)
{
     int wa = 0;
 for (int i = 0; i < 9; i++) {
     
     int count = 0;
     int a,b,c,d,e,f;
     a=4*i;
     b=4*i+1;
     c=4*i+2;
     d=4*i+3;
     e=53-2*i;
     f=52-2*i;
     if(s[a] == '0')
     count++;
     if(s[b] == '0')
     count++;
     if(s[c] == '0')
     count++;
     if(s[d] == '0')
     count++;
     if(s[e] == '0')
     count++;
     if(s[f] == '0')
     count++;
     
     if(count >= x)
     {
         wa = wa + nCr(count,x);
     }
 }   

 return wa;
}

int main() {
    int x,n;
    cin>>x>>n;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin>>s[i];
    }
    int way = 0;
    for (int i = 0; i < n; i++) {
        way = way + ways(x,n,s[i]);
    }
    cout<<way;
	return 0;
}