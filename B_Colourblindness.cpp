#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        for (int j = 0; j < n; j++){
            if (a[j]=='B'){
                a[j] = 'G';
            }
            if (b[j]=='B'){
                b[j] = 'G';
            }
        }
        if (a == b){
            cout << "YES" << '\n';
        }     
        else{
            cout << "NO" << '\n';
        }
    }
}