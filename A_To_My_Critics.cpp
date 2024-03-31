#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b >> c;
        if (a + b >= 10 || b + c >= 10 || a + c >= 10){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}