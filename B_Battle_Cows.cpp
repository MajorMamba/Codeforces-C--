///  -------Wrong answer on pretest 2 ------
#include <bits/stdc++.h>
int main(){
    using namespace std;
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> k;
        int arr [n];
        for (int j = 0; j < n; j++){
            cin >> arr[j];
        }
        int mycow = arr[k-1];
        int untillbig = 0;
        if( k != 1 and k != 2){
            for (int l = 0; l < k-1; l++){
                if (l != n-1){
                    if (mycow > arr[l]){
                        untillbig += 1;
                    }
                    else{
                        if (l == 1 || l == 2){
                            int temp;
                            temp = arr[l];
                            arr [l] = mycow;
                            arr[k-1] = temp;
                            break;
                        }
                        else{
                            int temp;
                            temp = arr[0];
                            arr[0] = mycow;
                            arr[k-1] = temp;
                            break;
                        }
                    }
                }
            }
        }
        int wins = 0;
        if (arr[2] == mycow){
            wins += 1;
            for (int m = 3; m < n; m++){
                    if (arr[m]<mycow){
                        wins += 1;
                    }
                    else if(arr[m]>mycow){
                        break;
                    }
            }
        }
        else{
            for (int m = 0; m < n; m++){
                    if (arr[m]<mycow){
                        wins += 1;
                    }
                    else if(arr[m]>mycow){
                        break;
                    }
            }

        }
        cout << wins << '\n';
        
    }
}