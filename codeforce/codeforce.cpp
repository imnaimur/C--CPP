#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>> n;
    if (n>2 && n%2 == 0){
        cout << "Yes" << "\n";
        // if ((n/2)%2 == 0){
        //     cout << "Yes" << "\n";
        // }else{
        //     cout<< "No"<< "\n";
        // }
    }else{
        cout<< "No"<< "\n";
    }
}