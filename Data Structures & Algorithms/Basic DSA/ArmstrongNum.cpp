// ArmstrongNum
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,num,digit, SumCubes=0;
    cin>>n;
    num = n;
    while(num>0){
        digit = num%10;
        num= num/10;
        SumCubes += pow(digit, 3);
    }
    if(SumCubes==n){
        cout<<"Armstrong num";
    }
    else{
        cout<<"Not Armstrong num";
    }
    return 0;
}

