//------Wrong Answer on test case 3---------------
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
        string q;
        q += arr[0];
        for (int k = 1; k < n; k++){
            for (int l = 0; l < q.length(); l++){
                if (arr[k] == q[l]){
                    repeat = true;
                    break;
                }
            }
            if(repeat == true){
                break;
            }
            else{
                q += arr[k];
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