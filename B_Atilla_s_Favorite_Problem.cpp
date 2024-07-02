#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        string arr, alph;
        alph = "abcdefghijklmnopqrstuvwxyz";
        cin >> arr;
        int ma = 0;
        for (int j = 0; j < n; j++){
            for (int k = 0; k < 26; k++){
                if (arr[j] == alph[k]){
                    if (k > ma){
                        ma = k;
                    }
                }
            }
        }
        cout << ma+1 << '\n';
    }
}