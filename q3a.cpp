#include<iostream>
using namespace std;
int linear(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            return i+1;
        }
    }
}
int main(){
    int arr[]={1,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int missing=linear(arr,n);
    cout<<"missing element:"<<missing;
}
