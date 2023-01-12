#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m, i = 1,lim,bob;
    cin >> n >> m;
    lim = n;
    bob = m;
    while(true){
        lim *= 3;
        bob *= 2;
        if(lim > bob){
            break;
        }
        i++;
    }
    cout << i << endl;
}