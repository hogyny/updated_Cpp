#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i, length ;
    double sum, num;
    double Average;
    
    cout << "Give sequence length: " ;
    cin >> length;
    if (length > 0){
        for(i = 1; i <= length; i++ ){
        cout << "Give " << i << ". " << "number: ";
        cin >> num;
        sum += num;
    }
    Average = sum/ length;
    cout << fixed << showpoint << setprecision(2) << "Average = " << Average ;
    }
    
    else if(length < 0){
        cout << "Wrong size!";
    }
    else {
        cout << "Empty sequence!";
    }
    
    return 0;
}
