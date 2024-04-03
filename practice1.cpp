#include <bits/stdc++.h>
int main(){
    using namespace std;
    vector<int> b ({1, 2, 2, 4, 3});
    sort(b.begin(), b.end(), greater<int>());
    for (int i = 0; i < b.size(); i++){
        cout << b[i] << '\n';
    }
    return 0;
}