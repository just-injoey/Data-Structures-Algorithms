// FactorialForLoop
#include <iostream>
using namespace std;

int factorial(int n){
    int result=1;
    for(int i= 2; i<=n; i++){
        result *= i;
    }
    return result;
}

int main(){
    cout<<factorial(5);
    return 0;
}