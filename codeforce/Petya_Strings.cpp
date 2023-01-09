#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string fst,lst;
    cin >> fst >> lst;
    int n = lst.length(),count = 0;

    for (int i = 0; i< n; i++){

       char ch1 = tolower(fst[i]),ch2 = tolower(lst[i]);

        if (ch1 == ch2){
            count = 0;
        }
        else{
            
            if (ch1 < ch2 ){

                count --;
            }else{

                count ++;
            }
            
            break;
        }
    }
   if (count < 0){
    cout << "-1" << endl;
   }else if (count == 0){
    cout << "0" << endl;
   }else{
    cout << "1" << endl;
   }
}
