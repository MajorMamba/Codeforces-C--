#include <bits/stdc++.h>
int main(){
    using namespace std;
    string n;
    cin >> n;
    string str0 = "0000000";
    string str1 = "1111111";
    int f0 = n.find(str0);
    int f1 = n.find(str1);
    if (f0 != string::npos || f1 != string::npos){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
}