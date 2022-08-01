// reverse input number

#include <iostream>

using namespace std;

int main(){
    int n, digit, rev_num=0;
    cin>>n;
    while(n>0){
        digit = n%10;
        n = n/10;   
        rev_num = rev_num*10 + digit;
    }
    cout<< rev_num;
    return 0;
}

