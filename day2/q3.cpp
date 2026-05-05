#include <iostream>
using namespace std;

int main() {
    int a ;
    cout<<"Enter value of a = ";
    cin>>a;
    
    int b ;
    cout<<"Enter value of b = ";
    cin>>b;
    
    int maxInt = (a > b) ? a : b;

    cout << "Maximum value is: " << maxInt << endl;
    return 0;
}