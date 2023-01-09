#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string fst,lst;
    cin >> fst >> lst;
    int n = lst.length(),count;
    for (int i = 0; i< n; i++){
        if (fst[i] != lst[i] || lst[i]- 32){
            count++;
        }
    }
    cout << count;
}
