#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// int main(){
//     vector<int> v;
//     int n;
//     cin >> n;
//     for(int i = 0; i< n; i++){
//         int a;
//         cin >> a;
//         v.push_back(a);
//     }
//     cout << v[1];
// }

int main(){
    struct
    {
        vector<int> id;
        vector<string> name;
    }student;
    for(int i = 0; i< 3; i++){
        int n;
        cout<< "enter id :";
        cin>> n;
        cout<< "Enter name: ";
        string nm;
        cin >> nm;
        student.id.push_back(n);
        student.name.push_back(nm);
    }
    cout << student.id[1];
}