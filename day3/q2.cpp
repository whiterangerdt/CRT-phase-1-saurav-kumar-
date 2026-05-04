#include<iostream>
using namespace std;
int sum=0;
int main(){
      while(true){
        int n;
        cin>>n;
        if(n<0){
            break;
        }else{
            sum+=n;
            cout<<endl<<"sum: "<<sum;
        }
      }
}




/*wap that takes int as an input and print the first n terms of the fibbonaci sequence*/


