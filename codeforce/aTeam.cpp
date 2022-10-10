#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count1,count2,a;
    count2 = 0;
    cin>> n;
    getchar();
    string container[n];
    for(int i = 0;i <n; i++){
        getline(cin,container[i]);
        count1 = 0;
        for(int j = 0; j<5;j++){
            if(container[i][j] == '1'){
                count1 +=1;
            }
        }
        if(count1 >= 2){
            count2 +=1;
        }
    }
    cout<< count2<< endl;
}