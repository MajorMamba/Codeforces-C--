//-----Runtime error on Test 2------
#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n, k, temp;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> k;
        vector<int> arr;
        for (int j = 0; j < n; j++){
            cin >> temp;
            arr.push_back(temp);
        }
        int a = 0;
        int b = n-1;
        int c = k/2;
        int ships = 0;
        bool allz = false;
        if (k%2 != 0){
            for (int l = 0; l < c; l++){
                if (allz == false){
                    if(arr[a]!=0){
                        arr[a] -= 1;
                    }
                    else{
                        a += 1;
                        arr[a] -= 1;
                    }
                    if (arr[b]!=0){
                        arr[b] -= 1;
                    }
                    else{
                        b -= 1;
                        arr[b] -= 1;
                    }
                }
                int count = 0;
                for (int m = 0; m < n; m++){
                    if (arr[m] == 0){
                        count += 1;
                    }
                }
                if (count == n){
                    allz = true;
                    break;
                }
            }
            if (allz == false){
                arr[a] -= 1;
            }
        }
        else{
            for (int l = 0; l < c; l++){
                if (allz == false){
                    if(arr[a]!=0){
                        arr[a] -= 1;
                    }
                    else{
                        a += 1;
                        arr[a] -= 1;
                    }
                    if (arr[b]!=0){
                        arr[b] -= 1;
                    }
                    else{
                        b -= 1;
                        arr[b] -= 1;
                    }
                }
                else{
                    break;
                }
                int count = 0;
                for (int m = 0; m < n; m++){
                    if (arr[m] == 0){
                        count += 1;
                    }
                }
                if (count == n){
                    allz = true;
                    break;
                }
            }
        }
        for(int o = 0; o < n; o++){
            if (arr[o] == 0){
                ships += 1;
            }
        }
        cout << ships << '\n';
    }
}
