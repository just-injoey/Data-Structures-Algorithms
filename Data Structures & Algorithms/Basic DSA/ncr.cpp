// calculate nCr;

#include <iostream>
using namespace std;

int factorial(int n){
    int result =1;
    for(int i=2; i<=n;i++){
        result *= i;
    }
    return result;
}

int main(){
    int n,r, nCr;
    cin>>n>>r;
    nCr = factorial(n)/(factorial(n-r)*factorial(r));
    cout<< nCr;
    return 0;
}