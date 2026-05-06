#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    void display(){
        cout<<name<<"     "<<roll_no;
    }
};
int main(){
    student s1;
    s1.name="sahil";
    s1.roll_no=1654;
    s1.display();
    student s2;
    s2.name="asdf";
    s2.roll_no=1234;
    s2.display();
    
}