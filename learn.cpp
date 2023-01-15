#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int q;
    cin >> q;
    // auto it;
    int it = find(v.begin(),v.end(),q);
    if(it!=v.end())
        cout << it-v.begin();
    else
        cout << -1;
}



// int main(){
//     int n;
//     cin>> n;
//     int na[n];
//     for(int i =0; i<n;i++){
//         cin>> na[i];
//     }
//     int s ;
//     int count = 0, f =0;
//     cin >> s;
//     for (int i = 0; i< n ; i++){
//         if(na[i] == s){
//             cout << i << endl;
//             return 0;
//         }
//     }
//     // if (f == 1){
//     //     cout << count << endl;
//     // }else{
//         cout << -1 << endl;
//     // }
// }