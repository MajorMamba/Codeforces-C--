#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        int arr[n];
        bool repeat = false;
        for (int j = 0; j < n; j++){
            cin >> arr[j];
        }
        for (int k = 0; k < n; k++){
            for (int l = k+1; l < n; l++){
                if (arr[k] == arr[l]){
                    repeat = true;
                    break;
                }
            }
            if(repeat == true){
                break;
            }
        }
        if (repeat){
            cout << "NO" << '\n';
        }
        else{
            cout << "YES" << '\n';
        }
    }
}