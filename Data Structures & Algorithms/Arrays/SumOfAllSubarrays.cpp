#include <iostream>
using namespace std;

// 2 5 7
// 2 2,5 2,5,7 5 5,7 7 
void sumOfAllSubArrays(int arr[], int n){
    int curr =0; 
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            curr += arr[j];
            cout<<arr[j]<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    sumOfAllSubArrays(arr,n);
    return 0;
}

