#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n, temp;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        int arr[n] = {};
        int odd = 0;
        int wp = 0;
        for (int j = 0; j < n; j++){
            cin >> arr[j];
            if(arr[j]%2 != 0){
                odd += 1;
            }
            if(arr[j]%2 != j%2){
                wp += 1;
            }
        }
        int arrsize = sizeof(arr)/sizeof(arr[0]);
        if (arrsize/2 == odd){
            cout << wp/2 << '\n';
        }
        else{
            cout << -1 << '\n';
        }
    }
}