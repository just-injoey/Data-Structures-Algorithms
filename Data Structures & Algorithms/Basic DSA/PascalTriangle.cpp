// Pascal Triangle Pattern
#include <iostream>
using namespace std;

int fact(int n){
    int result =1;
    for(int i=2; i<=n; i++){
        result *= i;
    }
    return result;
}

int nCr(int n, int r){
    int result;
    result = fact(n)/(fact(n-r)*fact(r));
    return result;

}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<" "<<endl;
    }
    return 0;
}