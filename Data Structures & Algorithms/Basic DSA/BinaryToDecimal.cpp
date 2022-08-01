// BinaryToDecimal

#include <iostream>
#include <math.h>
using namespace std;

int BinToDec(int num){
    int i =0;
    int digit, ans=0;
    while(num>0){
        digit = (num%10)*(pow(2,i));
        num = num/10;
        ans += digit;
        // ans =digit;
        i++;
    }
    return ans;
}

int main(){
    int bnum;
    cin>>bnum;
    cout<<BinToDec(bnum);
    return 0;
}