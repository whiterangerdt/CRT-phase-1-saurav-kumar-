/* wap using pointers to swap to numbers*/
#include<iostream>
using namespace std;
int temp;
int swap(int a,int b){
    temp=b;
    b=a;
    a=temp;
    cout<<a<<b;
    

}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
}