#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,size = 0;
    string clr;
    cin >> n >> clr;
    for (int i = 0; i< n-1; i++){
        if (clr[i] == clr[i+1]){
            size++;
        }
    }
    cout<< size << endl;
}