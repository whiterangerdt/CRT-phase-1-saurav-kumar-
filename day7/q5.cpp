//create a college management system in which a single parent class college extended with a student(roll no, mob no, subject,email, batch , course) and a teacher(department ,subject, salary) class and call a virtual funtion to show there classes(student or teacher etcw



#include<iostream>
using namespace std;
class college{
    public:
        string name;
        string subject;
        college(){
            name="sahil";
            subject="compiler creation";
        }
};
        class teacher:public college{
            public:
            string department;
            
            int salary;
        teacher(){
           this->department="cs department";
            
            salary=150000;
        }

        void show(){
            cout<<department<<endl<<subject<<endl<<salary<<endl;
        }
        };


class student:public college {
    public:
        
        int age;
        
        student(){
           
            this->age=23;
            
        }
        void show(){
            cout<<name<<endl<<age<<endl<<subject<<endl;
            
        }
};
int main(){
    student s1;
    s1.show();
    teacher t1;
    t1.show();

}