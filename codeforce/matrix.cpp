#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int move = 0,i,j,x;//i = row j = column
    for(i = 1;i<=5;i++){
        for(j = 1;j<=5;j++){
            cin >> x;
            if(x == 1){
                cout<< abs(i-3)+abs(j-3)<< endl;
                break;
            }
        }
    }
}

/*
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

*/