#include <iostream>
using namespace std;
int main() {
    int i=0;
    while(i<10){
        i++;
        if(i==4){
            //break;
            continue;
        }
        cout<< " Statement " << i << endl;
    }
        cout<< "-----------End of Program-----------" << endl;
    return 0;
}