#include <bits/stdc++.h>
int main(){
    using namespace std;
    string b, o;
    cin >> b;
    for (int i = 0; i < b.length(); i++){
        if (b[i] == '.'){
            o += "0";
        }
        else if (i != b.length()-1){
            if (b[i] == '-'){
                if (b[i+1] == '.'){
                    o += "1";
                    i++;
                }
                else{
                    o += "2";
                    i++;
                }
            }
        }
    }
    cout << o;
}