#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        string arr;
        cin >> arr;
        int x = 0;
        int y = 0;
        bool pass = false;
        for (int j = 0; j < n; j++){
            if (arr[j] == 'U'){
                y += 1;
            }
            else if (arr[j] == 'D'){
                y += -1;
            }
            else if (arr[j] == 'R'){
                x += 1;
            }
            else if (arr[j] == 'L'){
                x += -1;
            }
            if (x == 1 && y == 1){
                pass = true;
                break;
            } 
        }
        if (pass == true){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}