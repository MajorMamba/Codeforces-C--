#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        string abc;
        cin >> abc;
        if (abc == "abc" || abc == "acb" || abc == "bac" || abc == "cba"){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}