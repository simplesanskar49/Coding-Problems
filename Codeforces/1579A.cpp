#include <iostream>
#include <bits/stdc++.h>
#define  int long long int
#define  mod 1000000007
#define  pb push_back
#define  pc pop_back
#define  fi first
#define  sc second
using namespace std;
signed main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int a=0,b=0,c=0;
        string s ;
        cin >> s;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else
                c++;
        }
        b-=a;
        b-=c;
        if(b==0)    
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
	return 0;
}