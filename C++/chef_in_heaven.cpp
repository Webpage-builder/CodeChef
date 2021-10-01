#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    long long int t;
    scanf("%lld", &t);
    while(t--){
        long long int n, long_life = 0, curr_life = 0;
        scanf("%lld", &n);
        string s;
        cin >> s;
        int flag = 1;
        for(long long int i=0; i<s.length(); i++){
            if(s[i] == '0'){
                curr_life -= 1;
            }
            else {
                curr_life += 1;
                long_life += 1;
            }
            if(curr_life == 0){
                printf("YES\n");
                flag = 0;
                break;
            }
        }
        if(flag){
            if(long_life >= ceil((float)s.length()/2)){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}
