#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cout<<"enter the element num "<<i+1<<" of the array:";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int check=1;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
              check=0;
            }
        }
        if(check==1){
                count++;
            }
    }
    cout<<"total distinct elements is:"<<count;
}
