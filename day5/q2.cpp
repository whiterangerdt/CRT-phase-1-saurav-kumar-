#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    cout<<*ptr<<endl<<ptr<<endl;
    *ptr+=4;
    
     cout<<*ptr<<endl<<ptr;
}