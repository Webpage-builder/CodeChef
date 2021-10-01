#include<iostream>
using namespace std;

int value(int index){
    int arr[] = {60, 20, 36, 51};
    if(index < 4){
        return arr[index];
    }
    return -1;
}

int main(){
    int t;
    long long int n, countVal, topDice, leftDice, secondLayerCovered, secondLayerUncovered;
    cin >> t;
    while(t--){
        countVal = 0;
        cin >> n;
        if(n <= 4){
            countVal += value(n%4);
        }
        else{
            topDice = n%4;
            countVal += value(topDice);

            if(topDice == 0){
                topDice = 4;
            }
            secondLayerCovered = topDice;
            countVal += secondLayerCovered * 11;

            secondLayerUncovered = 4 - secondLayerCovered;
            countVal += secondLayerUncovered * 15;

            leftDice = n - topDice - 4;
            if(leftDice > 0)
                countVal += (leftDice/4) * 44;
        }
        cout << countVal << endl;
    }
    return 0;
}
