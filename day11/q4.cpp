#include<iostream>
using namespace std;
int sum(int x){
    if(x==1){
        return 1;
        }
    int total =+ x+sum(x-1);
    return total;

}
int main(){
    int x = 9;
    cout<<sum(x);
    
    return 0;

}