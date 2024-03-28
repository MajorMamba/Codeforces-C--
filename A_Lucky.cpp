#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t;
    cin >> t;
    string tk;
    for (int i = 0; i < t; i++){
        cin >> tk;
        int fh = 0;
        int lh = 0;
        for (int j = 0; j < 3; j++){
            int tfh = tk[j] - '0'; 
            fh += tfh;
        }
        for (int k = 3; k < 6; k++){
            int lfh = tk[k] - '0'; 
            lh += lfh;
        }
        if (fh == lh){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}