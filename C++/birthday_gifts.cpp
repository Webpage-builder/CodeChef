#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;
        long long int arr[n] = {0};
        for(long long int i=0; i<n; i++) cin >> arr[i];
        long long int sum1 = 0, sum2 = 0;
        sort(arr, arr + n, greater<int>());
        long long int k1= k, k2= k, i=0;
        while(k1--){
            sum1 += arr[i];
            i += 2;
        }
        i=1;
        while(k2--){
            sum2 += arr[i];
            if(k2 == 0) {
                sum2 += arr[i+1];
            }
            i += 2;
        }
        cout << (sum1 > sum2 ? sum1 : sum2) << "\n";
    }
    return 0;
}
