/*Time limit exceeded on test 14*/
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
    int c = 1;
    for (int j = 0; j < n; j++){
        int ct = 1;
        if (j != n-1){
            for (int k = j+1; k < n; k++){
                if (a[k] < a[k-1]){
                    break;
                }
                else{
                    ct += 1;
                }
            }
            if (ct > c){
                c = ct;
            }
        }
    }
    cout << c << '\n';
}