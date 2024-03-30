#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, r;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> r;
        if (1900 <= r){
            cout << "Division 1" << '\n';
        }
        else if (1600 <= r && r <= 1899){
            cout << "Division 2" << '\n';
        }
        else if (1400 <= r && r <= 1599){
            cout << "Division 3" << '\n';
        }
        else{
            cout << "Division 4" << '\n';
        }
    }   
}