// OctalToDecimal
#include <iostream>
using namespace std;

int OctToDecimal(int num){
    int y, x=1, ans=0;
    while(num>0){
        y = num%10;
        num = num/10;
        ans += y*x;
        x *= 8;
    }
    return ans;
}
int main(){
    int octNum;
    cin>>octNum;
    cout<<OctToDecimal(octNum);

    return 0;
}