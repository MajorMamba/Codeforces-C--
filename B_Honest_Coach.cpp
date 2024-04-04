#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n, temp;
    cin >> t;
    for (int i = 0; i < t; i++){
        bool repeat = false;
        cin >> n;
        int min = 0;
        vector<int> s;
        for (int j = 0; j < n; j++){
            cin >> temp;
            s.push_back(temp);
        }
        sort(s.begin(), s.end());
        for(int k = 0; k < n; k++){
            if (k != n-1){
                for (int l = k+1; l < n; l++){
                    if (s[l] == s[k]){
                        repeat = true;
                        break;
                    } 
                }
            }
            if(repeat){
                break;
            }
        }
        if (repeat == false){
            min = s[1]-s[0];
            for (int m = 0; m < n; m++){
                if (m != n-1){
                    if (s[m+1]-s[m] < min){
                        min = s[m+1]-s[m];
                    }
                }
            }
            cout << min << '\n';
        }
        else{
            cout << 0 << '\n';
        }
    }   
}