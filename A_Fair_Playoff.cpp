#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, s1, s2, s3, s4;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> s1 >> s2 >> s3 >> s4;
        if ((s1 > s3 && s1 > s4) || (s2 > s3 && s2 > s4)){
            if (s1 > s3 && s1 > s4){
                if(s3 > s2 || s4 > s2){
                    cout << "YES" << '\n';
                }
                else{
                    cout << "NO" << '\n';
                }
            }
            else if (s2 > s3 && s2 > s4){
                if((s3 > s1 && s3 < s2) || (s4 < s2 && s4 > s1)){
                    cout << "YES" << '\n';
                }
                else{
                    cout << "NO" << '\n';
                }
            }
        }
        else if ((s3 > s1 && s3 > s2) || (s4 > s1 && s4 > s2)){
            if (s3 > s1 && s3 > s2){
                if(s1 > s4 || s2 > s4){
                    cout << "YES" << '\n';
                }
                else{
                    cout << "NO" << '\n';
                }
            }
            else if (s4 > s1 && s4 > s2){
                if(s1 > s3 || s2 > s3){
                    cout << "YES" << '\n';
                }
                else{
                    cout << "NO" << '\n';
                }
            } 
        }
        else{
            cout << "NO" << '\n';
        }
    }
}