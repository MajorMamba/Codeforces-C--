#include <iostream>
int main(){
    using namespace std;
    int i, n;
    cin >> n;
    int c = 0;
    for (i = 1; i <= n; i++){
        string op;
        cin >> op;
        if (op == "X++" || op == "++X"){
            c+=1;
        }
        else{
            c-=1;
        }
    }
    cout << c;
}