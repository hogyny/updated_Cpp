#include <iostream>
#include <cstdlib>
using namespace std;
// this program serve as tutor to generate two random number for a student to solve and later check if the solution by him is correct.

int main(){
    srand (time(0)); 
    int first, second, total;
    first = rand() % 1000; //from 0 to 1000
    second = rand() % 1000;
    total = first + second;
    cout << "Add two random numers:" << endl;
    cout << first << " + " << second << " = ?" << endl;
    
    //Result checking
    
    cout << "Press any key to continue...." ;
    cin.get();
     cout << first << " + " << second << " = "  << total << endl;
    
    
    
    return 0;
}
