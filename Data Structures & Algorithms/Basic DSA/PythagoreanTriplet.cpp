#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n1,n2,n3,a,b,c;
    cin>>n1>>n2>>n3;

    a = max(n1,max(n2,n3));
    if(a==n1){
        b=n2;
        c=n3;
    }
    else if(a==n2){
        b=n1;
        c=n3;
    }
    else{
        b=n2;
        c=n1;
    }
    
    if(pow(a,2)==pow(b,2)+pow(c,2)){
        cout<<"Pythagorean Triplet";
    }
    else{
        cout<< "Not Pythagorean Triplet";
    }

    
    return 0;
}