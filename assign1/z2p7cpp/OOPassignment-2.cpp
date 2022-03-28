#include<iostream>
using namespace std;
class Student{
    private:
       int rno;
       string name;
       string course;
    public:
        Student(){

        }
        Student(int rno,string name,string course){
          this->rno=rno;
          this->name=name;
          this->course=course;
        }
        void displayInfo(){
         cout<<"\nRoll no:"<<rno<<"\tName:"<<name<<"\t\tCourse:"<<course<<endl;
        }
        int getRno(){
         return this ->rno;
        }
        string getName(){
        return this->name;
        }
        string getCourse(){
        return this ->course;
        }
};
Student stu[5];
    int rno;
    string name;
    string course;

void rnosearch(){
    int rno_search;
      cout<<"Enter Roll number you want to search:";
      cin>>rno_search;
    for(int i=0;i<5;i++){
        if(rno_search==stu[i].getRno()){
              cout<<"\n Information of entered Roll Number \n"<<endl;
              cout<<"Roll No:"<<stu[i].getRno()<<"\tName:"<<stu[i].getName()<<
              "\tCourse:"<<stu[i].getCourse()<<endl;
        }
    }  
}
int main(){
    
    for(int i=0;i<5;i++){
        cout<<"Enter rno:";
        cin>>rno;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Course Name:";
        cin>>course;
        cin.ignore();
        stu[i]=Student(rno,name,course);
    }
    
    cout<<"\n______Student Information_____\n";
    for(int i=0;i<5;i++){
       stu[i].displayInfo();       
    }
    cout<<"\n______Search Student Information______\n"<<endl;
    rnosearch();
    return 0;
}