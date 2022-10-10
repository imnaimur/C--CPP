#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count=0,a;
    cin>> n >> k;
    int str[n];
    for(int i = 0;i < n;i++){
        cin>> str[i];
    }
    for (int j = 0 ;j<n;j++){
        if(str[j] >= str[k-1]){
            if(str[j] != 0)
                count+=1 ;
        }
    }
    cout<< count << endl;
}