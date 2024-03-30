#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        string s, o;
        cin >> s;
        int hh = (s[0]+ - '0') * 10 + (s[1] - '0');
        if (hh < 12){
            if (hh != 0){
                cout << s << " " << "AM" << '\n';
            }
            else{
                cout << "12" << s[2] << s[3] << s[4] << " " << "AM" << '\n';                
            }
        }
        else if (hh >= 12 && hh <= 23){
            if  (hh > 12 && hh < 22){
                cout << "0" << hh - 12 << s[2] << s[3] << s[4] << " " << "PM" << '\n';
            }
            else if (hh > 21){
                cout << hh - 12 << s[2] << s[3] << s[4] << " " << "PM" << '\n';
            }
            else{
                cout << hh << s[2] << s[3] << s[4] << " " << "PM" << '\n';
            }
        }
    }
}