#include <iostream>
int main(){
    using namespace std;
    int i, n;
    string word;
    cin >> n;
    for (i = 1; i <= n; i++){
        cin >> word;
        if (word.length()>10){
            int wc = word.length() - 2;
            cout << word[0] << wc << word[word.length()-1] << '\n';
        }
        else{
            cout << word << '\n';
        }
    }
}