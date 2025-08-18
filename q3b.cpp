#include<iostream>
using namespace std;
int binary(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==mid+1){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return left+1;
}
int main(){
    int arr[]={1,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int missing=binary(arr,n);
    cout<<"missing element:"<<missing;
}
