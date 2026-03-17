#include<iostream>
#include<string>
using namespace std;

class person{
public:
    string name;
    int age;

    // 
    person(){}
};
class student:public person{
    public:
    int rollno;

    student(string name,int age,int rollno):person(name,age),rollno(rollno){}

    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"roll no:"<<rollno<<endl;
    }
};
int main()
{
    student s1;
    s1.name="shraddha";
    s1.age=20;
    s1.rollno=101;
    s1.getInfo();
    return 0;
}