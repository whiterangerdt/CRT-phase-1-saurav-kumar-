#include <iostream>
using namespace std;

int main() {
    int age ;
    cout<<"Enter age = ";
    cin>>age;
    
    if (age >= 100 ) {
        cout<<"Century and eligible for vote.";
    } 
    
    else if(age >= 80 && age < 100 ) {
        cout<<"Senior citizens and eligible for vote.";
    } 
    
    else if(age >= 18 && age < 80 ) {
        cout<<"Eligible for vote.";
    } 
    
    else if(age<0 && age < 18) {
        cout<<"Not eligible for vote.";
    } 
    
    else {
        cout<<"Not eligible for vote.";
    }