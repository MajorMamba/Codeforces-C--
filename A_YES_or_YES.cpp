#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        string s;
        cin >> s;
        if (s == "YES" || s == "YEs" || s == "Yes" || s == "yes" || s == "yES" || s == "yeS" || s == "yEs" || s == "YeS"){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}