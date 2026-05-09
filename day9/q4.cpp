#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int temp;
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=n-1;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }for(int k=0;k<n;k++){
        cout<<arr[k]<<"  ";
    }
}