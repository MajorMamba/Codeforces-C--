#include <bits/stdc++.h>
int main(){
    using namespace std;
    string p;
    cin >> p;
    bool output = false;
    int l = p.length();
    for (int i = 0; i < l; i++){
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            output = true;
            cout << "YES" << '\n';
            break;
        }
    }
    if (output == false){
        cout << "NO"<< '\n';
    }
}