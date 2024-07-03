#include <bits/stdc++.h>
int main(){
    using namespace std;
    int n, temp;
    cin >> n;
    vector<int> box;
    for (int i = 0; i < n; i++){
        cin >> temp;
        box.push_back(temp);
    }
    sort(box.begin(), box.end());

    for (int j = 0; j < n; j++){
        cout << box[j] << ' ';
    }
}