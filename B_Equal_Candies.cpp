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
        sort(a.begin(), a.end());
        int mn = a[0];
        int candy = 0;
        for (int k = 0; k < n; k++){
            candy += a[k] - mn;
        }
        cout << candy << '\n';
    }
}