#include <iostream>
using namespace std;
class Person
{
protected:
    string name ;
    string nrcno ;
public:
    void initData(string name,string nrcno){
        this->name=name ;
        this->nrcno=nrcno ;
    }
    void showData(){
        cout<< " \nName : " << name << endl ;
        cout<< " NRC : " << nrcno << endl ;
    }
};
class Student: public Person{
private:
    int rno ;
public:
    Student(){

    }
    Student(int rno,string name,string nrcno){
        this->rno=rno ;
        initData(name,nrcno) ;
    }
    void showData(){
        Person::showData() ;
        cout<<" Roll Number : " << rno << endl ;
    }
    void attend(){ 
        cout<< " \nHello I am Attending ZYP Level 4 " << endl ;
    }
};
class Programmer:public Person{
private:
    string skillSet ;
public:
    void setSkillSet(string skills){
        this->skillSet=skills ;        
    }
    void viewSkillSet(){
    cout<< " Hello, I am a programmer and my skill is : " << skillSet << endl ;
    }
};
int main(){
    Student student1 ;
    student1.initData("Mg Mag","12/YaTaNa(N)112345") ;
    student1.showData() ;
    Student student2(1,"Aye Aye","10/KAKATA(N)123456") ;
    student2.showData() ;
    student2.attend() ;
    Programmer programmer1 ;
    programmer1.intData("John","3D-12345") ;
    programmer1.
    programmer1.
    programmer1.
}