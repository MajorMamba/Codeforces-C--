#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n, temp;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        vector<int> a;
        for (int j = 0; j < n; j++){
            cin >> temp;
            a.push_back(temp);
        }
        int mx = 0;
        for (int k = 0; k < n; k++){
            int c = 1;
            for (int l = 0; l < n; l++){
                if (l == k){
                    c *= a[l] + 1;
                }
                else{
                    c *= a[l];
                }
            }
            if (max(mx, c) > mx){
                mx = c;
            }
        }
        cout << mx << '\n';
    }
}