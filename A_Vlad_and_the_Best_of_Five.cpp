#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        string arr = "";
        int a = 0;
        int b = 0;
        for (int j = 0; j < 5; j++){
            cin >> arr[j];
            if (arr[j] == 'A'){
                a += 1;
            }
            else{
                b += 1;
            }
        }
        if (b > a){
            cout << "B" << '\n';
        }
        else{
            cout << "A" << '\n';
        }
    }
}