#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b >> c;
        if (a > b && a < c){
            cout << a << '\n';
        }
        else if (a < b && a > c){
            cout << a << '\n';
        }
        else if (b < a && b > c){
            cout << b << '\n';
        }
        else if (b > a && b < c){
            cout << b << '\n';
        }
        else if (c < b && c > a){
            cout << c << '\n';
        }
        else if (c > b && c < a){
            cout << c << '\n';
        }
    }
}