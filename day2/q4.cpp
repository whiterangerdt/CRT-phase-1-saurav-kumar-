#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter value of n = ";
    cin>>n;
    
    for (int i = 1; i<= n; i++) {
        if (i%4 ==0) {
            continue ;
        }
    cout << "Numbera are : " << i << endl;
    }

    return 0;
}
