#include <bits/stdc++.h>
int main(){
    using namespace std;
    int n, m;
    bool prime = false;
    cin >> n >> m;
    bool prime1 = true;
    int prim = 0;
    for (int i = n+1; i <= m; i++){
        prime1 = true;
        if (prime == false){
            for (int j = 2; j < i; j++){
                if (i%j == 0){
                    prime1 = false;
                    prim = 0;
                    break;
                }
                else{
                    if(i-j == 1){
                        prime = true;
                        prim = i;
                        break;
                    }
                }
            }
        }
    }
    if (prime1 == true && prime == true){
        if (prim == m){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    else{
        cout << "NO" << '\n';
    }
}