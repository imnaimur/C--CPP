#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    cin>> s1 >> s2;
    int j,i,a,b,count;
    bool firstString= false,secondString = false;
    s3 = "abcdefghijklmnopqrstuvwxyz";
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    a = s1.length();
    
    for(i = 0;i < a;i++){
            if (s1[i] != 'a' || s3[i]){
                firstString = true;
                break;
            }else if(s2[i] != 'a' || s3[i]){
                secondString = true;
                break;
            }

    }
    if(firstString == true && secondString == true){
        cout <<"0"<<endl;
    }else if(firstString == true){
        cout<< "-1"<<endl;

    }else{
        cout<< "1"<<endl;
    }
}