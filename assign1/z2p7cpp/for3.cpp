#include <iostream>
using namespace std;
int main() {
    // start => end => (1) sum (2) count (3) Avg = sum/count
    // (1) ask user to enter start and end
    int start,end,sum=0,count=0 ;
    float average ;
    cout<< " Enter Start Number : " ;
    cin>>start ;
    cout<< " Enter End Number : " ;
    cin>>end ;
    // (2) initialize = sum = 0 / count = 0
    // (3) for ( number less than or equal to end number )add numbers to sum and increment count
    for( int i=start ; i<=end ; i++ ){ // 1 - 100000000000 // 1 - 10 = 10*11/2 = n(n+1)/2 = 10*11/2
        count++ ;
        sum += i ;
    }
    // (4) calculate average by formula avg=sum/count
    average = (float)sum / count ;
    // (5) out result
    cout<< " Sum of " << start << " to " << end << " is : " << sum << endl ;
    cout<< " Total Count is : " << count << endl ;
    cout<< " Average : " << average << endl ;
    
    return 0;
}