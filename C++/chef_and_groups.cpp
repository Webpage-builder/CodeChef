#include<iostream>
using namespace std;

int main(){
    int t;
    string s;
    long long int i=0;
    int groupCount;
    cin >> t;
    while(t--){
        cin >> s;
        groupCount = 0;
        for(i=0; i<s.length()-1;){
            if(s[i] == '1'){
                while(s[i] == '1'){
                    i++;
                }
                groupCount++;
            }
            else{
                i++;
            }
        }
        while(i < s.length()){
            if(s[i] == '1'){
                while(s[i] == '1')
                    i++;
                groupCount++;
            }
            else{
                i++;
            }
        }
        cout << groupCount << endl;
    }
    return 0;
}
