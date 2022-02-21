#include <iostream>
using namespace std;
int main() {
    string brands[5] = {"Apple","Samsung","Vivo","Oppo","Mi"};
    string searchName;
    int index=-1;
    cout<< " Enter Brand to Search : " ;
    getline(cin,searchName);

    for(int i=0;i<5;i++){
        if(searchName == brands[i]){
            index=i;
            break;
        }
    }
        if(index==-1){
        cout<< " Not found! " <<endl;
    }else{
        cout<<" Found at position : " << index << endl;
    }
    return 0;
}