#include <bits/stdc++.h>
int main(){
    using namespace std;
    int n;
    cin >> n;
    if ((n-4)%2 == 0){
        cout << 4 << " " << n-4;
    }
    else if ((n-9)%2 == 0){
        cout << 9 << " " << n-9; 
    }
}