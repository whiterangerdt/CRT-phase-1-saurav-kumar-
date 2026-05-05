#include <iostream>
using namespace std;
int main() {
    int grade ;
    cout<<"Enter percentage of Student = ";
    cin>>grade;
    
    if (grade >= 60) {
        if ( grade >= 70 ) {
            if (grade >= 80 ) {
                if (grade >= 90 ) {
                    cout << "Grade : A";
                } else {
                    cout << "Grade : B";    
                        }
            } else {
            cout << "Grade : c";
                   }
        } else {
        cout << "Grade : D"; 
        }
    } else {
            cout << "Grade : F";
            }

    return 0;
}
