//-----Wrong Answer on Test 2------
#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n, a, b;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> a >> b;
        if (2*a < b){
            cout << n*a << '\n';
        }
        else if (a > b){
            if (n%2 == 0){
                cout << ((n/2)*b) << '\n';    
            }
            else{
                cout << (((n-1)*b)/2)+a << '\n';
            }
        }
        else if (a < b){
            if (n%2 == 0){
                cout << ((n/2)*b) << '\n';    
            }
            else{
                cout << (((n-1)*b)/2)+a << '\n';
            }
        }
    }
}