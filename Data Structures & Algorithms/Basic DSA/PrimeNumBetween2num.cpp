// PrimeNumBetween2num
#include <iostream>
#include <math.h>
using namespace std;

void PrimeNumBetween(int a, int b){
    for(int i=a+1; i<b; i++){
        int flag = 0;
        for(int j=2; j<sqrt(i);j++){
            if(i%j==0){
                flag = 1;
                break;
            }
        }
        if(flag ==0){
            cout<< i ;
        }
    }
}

int main(){
    PrimeNumBetween(1,10);
    return 0;
}