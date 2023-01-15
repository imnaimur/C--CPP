#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i< n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << v[1];
}