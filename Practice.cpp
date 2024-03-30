#include <iostream>
int main(){
    using namespace std;
    for (int i = 12; i < 1000; i++){
        cout << i << "." << " " << i-4 << " " << i-9 << " " << i-(i-4) << " " << i-(i-9) << '\n';
    }
}