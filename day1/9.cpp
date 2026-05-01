#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    const int use=1234;
    const int pass=4567;
    
    if(use==a&&pass==b){
        cout<<true;
    }else{
        cout<<false;

    }



}