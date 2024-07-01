#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n, temp;
    cin >> t;
    for(int i = 0; i < t; i++){
        int ev = 0;
        int od = 0;
        cin >> n;
        vector<int> arr;
        for (int j = 0; j < n; j++){
            cin >> temp;
            arr.push_back(temp);
        }
        for (int k = 0; k < n; k++){
            if (arr[k] % 2 == 0){
                ev += 1;
            }
            else{
                od += 1;
            }
        }
        if (od % 2 != 0){
            cout << "NO" << '\n';
        }
        else{ 
            cout << "YES" << '\n';
        }
    }
}