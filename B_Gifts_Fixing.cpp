#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n, ta, tb;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        vector<int> a;
        vector<int> b;
        int ma = 1000000000;
        int mb = 1000000000;
        for(int j = 0; j < n; j++){
            cin >> ta;
            a.push_back(ta);
            if (ta < ma){
                ma = ta;
            }
        }
        for (int k = 0; k < n; k++){
            cin >> tb;
            b.push_back(tb);
            if (tb < mb){
                mb = tb;
            }
        }
        long long c = 0;
        for (int l = 0; l < n; l++){
            if (a[l]-ma != 0 && b[l]-mb != 0){
                c += max((a[l]-ma), (b[l]-mb)); 
            }
            else{
                c += (a[l]-ma) + (b[l]-mb);
            }
        }
        cout << c << '\n';
    }
}