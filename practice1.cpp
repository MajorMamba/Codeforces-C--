#include <bits/stdc++.h>
int main(){
    using namespace std;
    for (int b = 1; b <= 50; ++b) {
        string bins = bitset<8>(b).to_string();
        int bint = stoi(bins);
        cout << "Decimal: " << b << ", Binary: " << bint << '\n';
    }
    return 0;
}