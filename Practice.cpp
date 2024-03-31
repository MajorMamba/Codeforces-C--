#include <bits/stdc++.h>
#include <bitset>
int main(){
    using namespace std;
    int n;
    cin >> n;
    int bp1 = n;
    int bp2 = 0;
    int divider = 2;
    bool binbp = false;
    bool bindv = false;
    string bins = bitset<8>(divider).to_string();
    int bindiv = stoi(bins);
    do{
        string numStr = to_string(n);
        int numc = 0;
        for (char digit : numStr){
            if (digit == '0' || digit == '1') {
                numc += 1; 
            }
            else{
                break;
            }
        }
        if (numc == numStr.length()){
            binbp = true;
            bindv = true;
        }
        if (binbp == false){
            bins = bitset<8>(divider).to_string();
            bindiv = stoi(bins);
            while (binbp == false){
                if (bindiv > bp1){
                    break;
                }
                string bins = bitset<8>(divider).to_string();
                bindiv = stoi(bins);
                if (bp1 % bindiv == 0 && bindiv <= bp1){
                    bp2 = bp1 / bindiv;
                    string bp2s = to_string(bp2);
                    int bp2c = 0;
                    for (char dgt : bp2s){
                        if (dgt == '0' || dgt == '1'){
                            bp2c += 1; 
                        }
                        else{
                            break;
                        }
                    }
                    if (bp2c == bp2s.length()){
                        binbp = true;
                        bindv = true;   
                    }
                }
                else{
                    divider += 1;
                }
                if (bp2 != 0){
                    bp1 = bp2;
                }    
            }
        }
    }while(binbp == false && bindiv < bp1);
    if (binbp == true && bindv == true){
        cout << "YES" << '\n';
    }
    else if (binbp == true && bindv == false){
        cout << "NO" << '\n';
    }
    else if (binbp == false && bindv == false){
        cout << "NO" << '\n';
    }  
}