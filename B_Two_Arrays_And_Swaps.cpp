#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> k;
        int temp1;
        vector<int> a;
        vector<int> b;
        for (int j = 0; j < n*2; j++){
            cin >> temp1;
            if (j<n){
                a.push_back(temp1);
            }
            else{
                b.push_back(temp1);
            }        
        }
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end());
        int asize = a.size();
        int bsize = b.size();
        for (int l = 0; l < k; l++){
            sort(a.begin(), a.end(), greater<int>());
            sort(b.begin(), b.end());
            asize = a.size();
            bsize = b.size();
            if(a[asize-1] < b[bsize-1]){
                a.pop_back();
                a.push_back(b[bsize-1]);
                b.pop_back();
            }
        }
        int sum = 0;
        for (int m = 0; m < asize; m++){
            sum += a[m];
        }
        cout << sum << '\n';
    }
}