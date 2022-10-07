#include<iostream>
// #include <cstdlib>
// #include <string> 
#include <bits/stdc++.h>


using namespace std;

int main(){int n,x,a;
    cin >> n;
    string s1[n],s2[n];


    for(int i=0 ;i<n;i++){
        cin>> s1[i];
    }


    for (int i =0; i<n; i++){
        if (s1[i].length()>10){
            a = s1[i].length() - 2;
            std::string c = std::to_string(a);
            x = s1[i].length()-1;
            s2[i] = s1[i][0] + c + s1[i][x];
        }else{
            s2[i] = s1[i];
        }
    }
    for (int i=0;i<n;i++){
        cout<< s2[i] << "\n";
    }
}