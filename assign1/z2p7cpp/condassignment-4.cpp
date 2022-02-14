#include <iostream>
using namespace std;
int main() {
    float programming,english,math,max_mark,total_mark,avg_mark ;
    cout<< " Enter mark for Programming : " ;
    cin>>programming ;
    cout<< " Enter mark for English : " ;
    cin>>english ;
    cout<< " Enter mark for Math : " ;
    cin>>math ;    
    total_mark = programming + english + math ;
    avg_mark = total_mark / 3 ;
    max_mark = programming;
    if( english > max_mark){
        max_mark = english ;
    }if( math > max_mark ){
        max_mark = math ;
    }
        cout<< " Subject that got maximum mark is : " << max_mark <<endl ;
        cout << " Total Mark : " << total_mark <<endl ;
        cout << "Average Mark : " << avg_mark <<endl ;
        
    if( programming<50 || english<50 || math<50 ){
        cout<< " Failed! " <<endl ;
    }else if( programming>=80 || english>=80 || math>=80 ){   
        cout<< " Distinction! " <<endl ;
    }else{
        cout<< " Passed! " <<endl ;
    }






        return 0;
}







