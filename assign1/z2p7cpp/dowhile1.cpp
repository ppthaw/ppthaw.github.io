#include <iostream>
using namespace std;
int main() {
    int num;
    cout<< " If you entered 0 , program will terminate! " << endl;
    do{
        cout<< " Please Enter a non zero number: ";
        cin>>num;
        if(num>0){
            cout<< num << " is Positive ! ";
        }else if(num<0){
            cout<< num << " is Negative ! ";
        }else{
            cout<< " Terminating from Program ...! ";
        }
    }while(num!=0);
   
    return 0;
}