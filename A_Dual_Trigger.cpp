#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        string arr;
        int c1 = 0;
        bool sbs = false;
        cin >> arr;
        for (int j = 0; j < n; j++){
            if(arr[j]== '1'){
                c1 += 1;
            }
        }
        if (c1 == 2){
            for (int k = 0; k < n; k++){
                if (k != n-1){
                    if (arr[k] == '1' && arr[k+1] == '1'){
                        sbs = true;
                        break;
                    }
                }
            }
        }
        if (c1%2 == 0 && sbs == false){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}