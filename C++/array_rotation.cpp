#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, q, x, sum=0, arrSum=0, a;
    cin >> n;
    for(long long int i=0; i<n; i++){
        cin >> a;
        sum = (sum+a+1000000007)%1000000007;
    }
    cin >> q;
    while(q--){
        cin >> x;
        sum *= 2;
        sum = sum % (1000000007);
        cout << sum << "\n";
    }
    return 0;

}
