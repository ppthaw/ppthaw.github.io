#include <iostream>
using namespace std;
int main() {
    float programming,english,math,max_mark,min_mark,total_mark,avg_mark ;
    cout<< " Enter mark for Programming : " ;
    cin>>programming ;
    cout<< " Enter mark for English : " ;
    cin>>english ;
    cout<< " Enter mark for Math : " ;
    cin>>math ;    
    total_mark = programming + english + math ;
    avg_mark = total_mark / 3 ;
    max_mark = programming;
    if( english > max_mark && english > math){
        max_mark = english ;
        cout<< " Subject that got maximum mark is English " <<endl ;
    }else if( math > max_mark && math > programming ){
        max_mark = math ;
        cout<< " Subject that got maximum mark is Math " <<endl ;
    }else{
        cout<< " Subject that got maximum mark is Programming "<<endl ;
    }
    min_mark = programming ;
    if( english < min_mark && english < math){
        min_mark = english ;
        cout<< " Subject that got minimum mark is English " <<endl ;
    }else if( math < min_mark && math < programming ){
        min_mark = math ;
        cout<< " Subject that got minimum mark is Math " <<endl ;
    }else{
        cout<< " Subject that got minimum mark is Programming "<<endl ;
    }
        cout << " Total Mark : " << total_mark <<endl ;
        cout << "Average Mark : " << avg_mark <<endl ;
    
    if( programming>=50 && english>=50 && math>=50 ){
        cout<< " Passed! " <<endl ;
    }else{
        cout<< " Failed! " <<endl ;
    }if( programming>=80 && programming>=50 ){
        cout<< " Distinction Subject - Programming " <<endl ;
    }if( english>=80 && english>=50 ){
        cout<< " Distinction Subject - English " <<endl ;
    }if( math>=80 && math>=50 ){
        cout<< " Distinction Subject - Math " <<endl ;
    }
    return 0;
}







