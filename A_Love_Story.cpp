#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t;
    cin >> t;
    string c;
    for (int i = 0; i < t; i++){
        cin >> c;
        string code = "codeforces";
        int count = 0;
        for(int j = 0; j < 10; j++){
            if (c[j]!=code[j]){
                count += 1;
            }
        }
        cout << count << '\n';
    }
}