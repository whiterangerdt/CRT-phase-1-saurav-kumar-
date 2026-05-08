#include<iostream>
using namespace std;
class Atm{
    private:
    int balance;
public:
Atm(){
    balance=5000;

}
void withdraw(int x){
    
    
    if(x>balance){
        cout<<"not sufficient balance";

    }else{
        balance=balance-x;
        cout<<"withdrawn "<<x<<endl;
    }
}
void showBalance(){
    cout<<"balance: "<<balance;
}
};
int main(){
Atm a1;
a1.withdraw(2000);
a1.showBalance();
}