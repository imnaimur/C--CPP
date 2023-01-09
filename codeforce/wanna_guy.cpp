#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n,x,y,i;    
    cin >>n;
    cin >>x;
    int a[x];
    int total[100];
    for(i = 0;i<x;i++){
        cin >> a[i];
        if (a[i] != total[i]){
            total[i] += a[i];
        }
    }
    cin >>y;
    int b[y];
    for(i = 0;i<y;i++){
        cin>> b[i];
        if (b[i] != total[i+]){
            total[i+x] += b[i];
        }
    }
        // for(i= 0;)
    for(i = 0; i<x+y;i++){
        cout<<total[i]<<endl;
    }

}