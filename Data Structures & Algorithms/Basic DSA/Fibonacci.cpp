// Fibonacci
#include <iostream>
using namespace std;

void Fib(int n){
    int t1,t2,t3;
    t1 = 0;
    t2 = 1;
    cout<<t1 << t2;
    for(int i=0; i<n-2; i++){
        t3 = t1+t2;
        cout<< t3;
        t1= t2;
        t2 = t3;
    }
    return;
}

int main(){
    Fib(10);
    return 0;
}