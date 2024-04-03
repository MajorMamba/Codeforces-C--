#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        string name;
        cin >> name;
        string cn = "";
        sort(name.begin(), name.end());
        if (n == 5){
            for (int j = name.length()-1; j >= 0; j--){
                if(name[j] == 'T' || name[j] == 'i' || name[j] == 'm' || name[j] == 'u' || name[j] == 'r'){
                    cn += name[j];
                }
            }
            sort(cn.begin(), cn.end());
            if (cn == "Timru"){
                cout << "YES" << '\n';
            }
            else{
                cout << "NO" << '\n';
            }
        }
        else{
            cout << "NO" << '\n';
        }
    }
}