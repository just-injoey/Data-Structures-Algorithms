// To be completed later

#include <iostream>
using namespace std;

int addBinary(int a, int b){
    int ans = 0;
    int prevCarry = 0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
            if(prevCarry ==1){
                ans = ans*10 + 0;
                prevCarry=1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        a/=10;
        b/=10
    }

    while(a>0){
        if(prevCarry == 1){
            ans = ans*10 + 0;
            prevCarry = 1;
        }
        else{
            ans = ans*10 + 1;
            prevCarry = 0;
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<addBinary(a,b)<<endl;
    return 0;
}