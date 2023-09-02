#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    string s;
    int count = 0;

    getline(cin >> ws, s);

    for (int i = 0; i < n; i++)
    {
      if (s[i] == '0')
      {
        if ((i == 0 || s[i - 1] == '0') && (i == n - 1 || s[i + 1] == '0'))
        {
          count++;
        }
      }
    }
    cout << count << endl;
  }
}
