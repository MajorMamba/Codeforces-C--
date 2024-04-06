#include <bits/stdc++.h>
#include <bitset>
int main(){
    using namespace std;
    int n, m, k, temp;
    cin >> n >> m >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
}