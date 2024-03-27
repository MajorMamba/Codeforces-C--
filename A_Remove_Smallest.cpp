#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        vector<int> integers;
        int temp;
        for (int j = 0; j < n; j++){
            cin >> temp;
            integers.push_back(temp);
        }
        sort(integers.begin(), integers.end());
        int temp1 = integers[0];
        int c = 1;
        for (int k = 1; k < n; k++){
            if (temp1 - integers[k] >= -1 && temp1 - integers[k] <= 1){
                temp1 = integers[k];
                c++;    
            }
            else{
                cout << "NO" << '\n';
                break;
            }
        }
        if (c == n || c == 0){
            cout << "YES" << '\n';
        }
    }
}