#include <iostream>
using namespace std;
int main(){
    int arr[]={5,3,7,8,1,1,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
        if(arr[mini]>arr[j]){
            swap(arr[mini],arr[j]);
        }
        
        }
}

for(int k=0;k<n;k++){
    cout<<arr[k];
}

}
    