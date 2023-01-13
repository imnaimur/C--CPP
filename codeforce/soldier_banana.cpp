#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w,ttl = 0,brw;
    cin >> k >> n >> w;
    for(int i = 1; i< w+1 ; i++){
        ttl += i*k; 
    }
    brw = ttl - n;
    if (brw<= 0){
        cout << 0 << endl;
    } else{
        cout << brw << endl;
    }
}