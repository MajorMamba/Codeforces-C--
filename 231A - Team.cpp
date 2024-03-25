#include <iostream>
int main(){
    using namespace std;
    int i, n;
    cin >> n;
    int r = 0;
    for (i = 1; i <= n; i++){
        int cont [3] = {};
        for (int j=0; j < 3; j++) {
            cin >> cont[j]; 
        }
        int c1 = 0;
        for (int k : cont){
            if (k == 1){
                c1+=1;
            }
        }
        if (c1 >= 2){
            r += 1;
        }
    }
    cout << r;
}