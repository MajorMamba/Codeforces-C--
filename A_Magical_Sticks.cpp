#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        if (n%2 == 0){
            cout << n/2 << '\n';
        }
        else{
            cout << (n/2)+1 << '\n';
        }
    }
}