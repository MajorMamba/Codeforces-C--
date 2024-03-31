#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n, temp;
    cin >> t;
    for (int i = 0; i < t; i++){
        int mx = 0;
        int mn = 0;
        cin >> n;
        vector<int> arr;
        for (int j = 0; j < n; j++){
            cin >> temp;
            if (j == 0){
                mn = temp;
            }
            arr.push_back(temp);
            mx = max(mx, temp);
            mn = min(mn, temp);
        }
        cout << mx - mn << '\n';

    }
}