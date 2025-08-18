#include<iostream>
using namespace std;
int countinversion(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int arr[]={1,11,7,24,18,25,4,44};
    int n=sizeof(arr)/sizeof(arr[0]);
    int total=countinversion(arr,n);
    cout<<"total count of inversion is:"<<total;

}
