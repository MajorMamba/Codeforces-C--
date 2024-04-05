#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int bc = 0;
        if (s.length()>0){
            string ls;
            ls += s[0];
            bc += 2;
            for (int j = 1; j < s.length(); j++){
                bool repeat = false;
                for (int k = 0; k < ls.length(); k++){
                    if (s[j]==ls[k]){
                        repeat = true;
                        bc += 1;
                        break;
                    }
                }
                if (repeat == false){
                    bc += 2;
                    ls += s[j];
                }
            }
            cout << bc << '\n';
        }
        else{
            cout << bc << '\n';
        }
    }
}