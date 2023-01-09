#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main ()
{
    int n,p,q,b[110],c[110]={0},i,j;
    cin >> n;
    cin >> p;
    for(i=1; i<=p; i++)
    {
        int x;
        cin >> x;
        c[x]++;
    }
    cin >>  q;
    for(i=1; i<=q; i++)
    {
        int x;
        cin >> x;
        c[x]++;
    }
    for(i=1; i<=n; i++)
    {
        if(c[i]==0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}