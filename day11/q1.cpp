#include<iostream>
using namespace std;
int main(){
    bool flag;
    int arr[]={8,7,3,6,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        flag=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }if(flag!=true){
            break;
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
}