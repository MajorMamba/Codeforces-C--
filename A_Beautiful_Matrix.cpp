#include <iostream>
int main(){
    using namespace std;
    int matrix [25] = {};
    for (int i = 0; i < 25; i++){
        cin >> matrix[i];
    }
    int c = 0;
    for (int j : matrix){
        c += 1;
        if (j == 1){
            break;
        }
    }
    if (c == 1 || c == 5 || c == 21 || c == 25){
        cout << 4;
    }
    else if (c == 2 || c == 4 || c == 6 || c == 10 || c == 16 || c == 20 || c == 22 || c == 24){
        cout << 3;
    }
    else if (c == 3 || c == 7 || c == 9 || c == 11 || c == 15 || c == 17 || c == 19 || c == 23){
        cout << 2;
    }
    else if (c == 8 || c == 12 || c == 14 || c == 18){
        cout << 1;
    }
    else{
        cout << 0;
    }
}