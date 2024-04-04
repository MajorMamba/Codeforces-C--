#include <bits/stdc++.h>
int main(){
    using namespace std;
    int n;
    cin >> n;
    int div = n/2;;
    int c = 0;
    if (n == 2){
        cout << 1 << '\n';
        cout << 2 << '\n';
    }
    else if (n == 3){
        cout << 1 << '\n';
        cout << 3 << '\n';
    }
    else if (n > 3){
        cout << div << '\n';
        if (n%2 == 0){
            while (c < div){
                cout << 2 << " ";
                c++;
            }
        }
        else{
            while (c < div-1){
                cout << 2 << " ";
                c++;
            }
            cout << 3;
        }
    }
}