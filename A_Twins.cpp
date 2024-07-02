#include <bits/stdc++.h>
int main(){
    using namespace std;
    int n, temp;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    int c1 = 0;
    int c = 0;
    int c3 = 0; 
    if (n == 2 && (a[0]==a[1])){
        cout << 2 << '\n';
    }
    else if (n == 2 && (a[0]!=a[1])){
        cout << 1 << '\n';
    }
    else if (n == 1){
        cout << 1 << '\n';
    }
    else if (n > 2){
        for (int j = n-1; j >= 1; j--){
            c1 += a[j];
            int c2 = 0;
            for (int k = j-1; k >= 0; k--){
                c2 += a[k];
            }
            c3 += 1;
            if (c1 > c2){
                break;
            }
        }
        cout << c3 << '\n';
    } 
}