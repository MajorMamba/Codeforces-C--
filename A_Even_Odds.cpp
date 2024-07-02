#include <bits/stdc++.h>
int main(){
    using namespace std;
    long long n, k;
    cin >> n >> k;
    if (n%2 == 0){
        if (k <= n/2){
            cout << (2*k)-1 << '\n';
        }
        else{
            cout << (2*k)-n << '\n';
        }    
    }
    else{
        if (k <= (n/2)+1){
            cout << (2*k)-1 << '\n';
        }
        else{
            cout << (2*k)-n-1 << '\n';
        }
    }
}