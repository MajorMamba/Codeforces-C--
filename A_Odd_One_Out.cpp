#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b >> c;
        if (a == b){
            cout << c << '\n';
        }
        else if (b == c){
            cout << a << '\n';
        }
        else if (a == c){
            cout << b << '\n';
        }
    }
}