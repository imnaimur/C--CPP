#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string lst,out;
    char age,pore;
    cin >> lst;
    int j,n = lst.length();
    for (int i = 0; i< n-1; i+=2){
        // cout<< i<< endl;
        for(j =0; j<n-1-i; j+=2){
            if(lst[j]> lst[j+2]){
                // lst[j]=lst[j+2],lst[j+2] = lst[j];
                age = lst[j];
                pore = lst[j+2];
                lst[j] = pore;
                lst[j+2] = age;
            }
        }

    }
    cout<< lst << endl;
}