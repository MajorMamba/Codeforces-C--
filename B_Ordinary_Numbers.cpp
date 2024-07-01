#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        int m, c;
        if (n < 10){
            cout << n << '\n';
        }
        else if (n >= 10){
            if (n <= 100){
                m = 11;
                c = 9;
                while (m <= n){
                    m += 11;
                    c += 1;
                }
            }
            else if (n > 100 && n <= 1000){
                m = 111;
                c = 18;
                while (m <= n){
                    m += 111;
                    c += 1;
                }
            }
            else if (n > 1000 && n <= 10000){
                m = 1111;
                c = 27;
                while (m <= n){
                    m += 1111;
                    c += 1;
                }
            }
            else if (n > 10000 && n <= 100000){
                m = 11111;
                c = 36;
                while (m <= n){
                    m += 11111;
                    c += 1;
                }
            }
            else if (n > 100000 && n <= 1000000){
                m = 111111;
                c = 45;
                while (m <= n){
                    m += 111111;
                    c += 1;
                }
            }
            else if (n > 1000000 && n <= 10000000){
                m = 1111111;
                c = 54;
                while (m <= n){
                    m += 1111111;
                    c += 1;
                }
            }
            else if (n > 10000000 && n <= 100000000){
                m = 11111111;
                c = 63;
                while (m <= n){
                    m += 11111111;
                    c += 1;
                }
            }
            else if (n > 100000000 && n <= 1000000000){
                m = 111111111;
                c = 72;
                while (m <= n){
                    m += 111111111;
                    c += 1;
                }
            }
        }
        if (n >= 10){
            cout << c << '\n';
        }
    }
}