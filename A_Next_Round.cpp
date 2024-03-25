#include <iostream>
int main(){
    using namespace std;
    int n, k;
    cin >> n >> k;
    int p[n] = {};
    int pc = 0;
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    for (int j : p){
        if (j>=p[k-1] && j > 0){
            pc+=1;
        }
    }
    cout << pc;
}