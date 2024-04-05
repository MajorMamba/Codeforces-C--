#include <bits/stdc++.h>
#include <bitset>
int main(){
    using namespace std;
    string n = "RGB";
    sort(n.begin(), n.end());
    char c1 = 'B';
    char c2 = 'G';
    for (int i = 0; i < 3; i++){
        if (n[i] == c1){
            n[i] = c2;
        }
    }
    for (int j = 0; j < 3; j++){
        cout << n[j] << '\n';
    }
}