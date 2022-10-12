#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,i,p = 0;
    cin >> n;
    string cont[n];
    for(i =0 ;i<n;i++){
        cin>> cont[i];
        if(cont[i]== "++X" || cont[i]=="X++"){
            p+= 1;
        }
        else{
                p -= 1;
        }
    }
    // for(i = 0; i<n; i++)
    cout << p << endl;
}