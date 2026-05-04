/*wap that takes +ve int n as input , calulate the factorial of n*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }cout<<"factorial: "<<f;

}



/*do while loop */


#include<iostream>
using namespace std;
int main(){
    int n=1;
    do{
        cout<<n;
        n++;
    }
    while(n<=3);
       
    

}
   