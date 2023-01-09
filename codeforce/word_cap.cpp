#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string wrd;
    cin >> wrd;
    if(wrd[0] >= 97){
        wrd[0] = wrd[0]- 32;
    }
    cout<< wrd << endl;
    // return 0;
}