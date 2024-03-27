#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a, b, c, d;
        int counter = 0;
        cin >> a >> b >> c >> d;
        if (b > a){
            counter += 1;
        } 
        if (c > a){
            counter += 1;
        }
        if (d > a){
            counter += 1;
        }
        cout << counter << '\n';
    }
}