#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if (a+b == c || b+c ==a || a+c ==b){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}