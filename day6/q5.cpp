//wap to create a student management system which store ans display students detail(name,  roll no,  email,  mob no, batch,crt class )using constuctor over loading

#include<iostream>
using namespace std;
class student{

    public:
    string name;
    int roll_no;
    string email;
    long long num;
    string batch;
    int crt_class;
    student(){
        name="sahil";
        roll_no=1654;
        email="sahil@gmail.com";
        num=7867756899;
        batch="morning";
        crt_class=14;
    }
    student(string n,int r,string e,long long m,string b,int c){
        name=n;
        roll_no=r;
        email=e;
        num=m;
        batch=b;
        crt_class=c;

    }
    void show(){
        cout<<name<<endl<<roll_no<<endl<<email<<endl<<num<<endl<<batch<<endl<<crt_class;
    }

};
int main(){
    student s1;
    s1.show();

}
