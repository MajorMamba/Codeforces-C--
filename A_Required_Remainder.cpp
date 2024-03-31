#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, x , y, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> x >> y >> n;
        int ans = (n-y)/x;
        int remainder = (ans*x)+y;
        cout << remainder << '\n'; 
    }
}