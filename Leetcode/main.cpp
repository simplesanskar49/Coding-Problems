#include <iostream>
#include <bits/stdc++.h>
#define  int long long int
#define  mod 1000000007
#define  pb push_back
#define  pc pop_back
#define  fi first
#define  sc second
using namespace std;

const int N=1e6+2;
int freq[N];
bool seive[N];


void createseive()
{
    for(int i=2;i<=1000001;i++)
        seive[i]=true;
    for(int i=2;i*i<=1000001;i++)
    {
        if(seive[i]==true)
        {
            freq[i]++;
            for(int j=i*i;j<=1000001;j+=i)
            {
                freq[i]++;
                seive[j]=false;
            }
        }
    }
}

signed main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cout << "Hello World";
        cout << endl;
    }
	return 0;
}