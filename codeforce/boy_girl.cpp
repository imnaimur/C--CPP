#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string nam,nam2= "";
    cin >> nam;
    int k,j,n = nam.length(),plag = 0;
    for (int i = 0; i < n; i++){
        int n2 = nam2.length();
        // cout<< n2 << endl;
        for (j = 0; j<n2+1 ; j++){
            // cout << j << endl;
            if (nam[i] != nam2[j]){
                if (j == n2){
                    nam2 += nam[i];
                    break;
                }
            }else{
                break;
            }
        }
    }
    // cout<< nam2 << endl;
    k = nam2.length();
    if (k % 2 != 0){
        cout <<"IGNORE HIM!"<< endl;
    }else{
        cout << "CHAT WITH HER!" << endl;
    }
    // for(int i = 0; i< 4; i++){
    //     int x =nam[i];
    //     cout << x << endl;
}
