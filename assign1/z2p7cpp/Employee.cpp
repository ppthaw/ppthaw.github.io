#include <iostream>
using namespace std;
class Employee{
private:
    int salary ;
    string name ;
public:
    Employee(){

    }
    Employee(int salary,string name){
        this->salary=salary ;
        this->name=name ;
    }
    int getSalary(){
        return this->salary ;
    }

    void displayInfo(){
        cout<< " \nNmae : " << name << " \tSalary :" << salary << endl ;
    }
    void salaryIncrease(int amount){
        this->salary += amount ;
    }
};
int main() {
    Employee emp[4] ;
    int salary ;
    string name ;
     // accept employee data from user input ;
    for(int i=0;i<4;i++){
        cout<< " Enter Employee : " << i+1 << " Information: " << endl ;
        cout<< " Enter Name : " ;
        getline(cin,name) ;
        cout<< " Enter Salary : " ;
        cin>>salary ;
        cin.ignore() ;
        emp[i]=Employee(salary,name) ;
    }
    //display info
    cout<< " \n_____Employee List Information_____\n " ;
     for(int i=0;i<4;i++){
         emp[i].displayInfo() ;
     }
    //salary increase
    for(int i=0;i<4;i++){
        emp[i].salaryIncrease(30000) ;
    }
    //display info
    cout<< " \n_____Updated Employee List Information_____\n " ;
     for(int i=0;i<4;i++){
         emp[i].displayInfo() ;
     }
     cout<< " \n_____Updated Employee List Information_____\n " ;
     for(int i=0;i<4;i++){
         emp[i].displayInfo() ;
     }

    return 0;
}