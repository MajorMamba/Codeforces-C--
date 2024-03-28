#include <bits/stdc++.h>
#include <cmath>
int main(){
    using namespace std;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        bool row = true;
        bool col = true;
        int rc = 0;
        int kc = 0;
        for (int j = 1; j <= 2*n; j++){
            for (int k = 1; k <= 2*n; k++){
                if (rc == 2){
                    if (row == true){
                        row = false;
                    }
                    else{
                        row = true;
                    }
                    rc = 0;
                }
                if (kc == 2){
                    if (col == true){
                        col = false;
                    }
                    else{
                        col = true;
                    }
                    if (col == true){
                        row = true;
                    }
                    else{
                        row = false;
                    }
                    kc = 0;
                }
                if (row == true){
                    cout << "#";
                }
                else{
                    cout << ".";
                }
                rc += 1;
            }
            cout << '\n';
            kc += 1;
            if (n%2 != 0){
                rc = 0;
            }
        }
    }       
}