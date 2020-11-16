#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Give three numbers: ";
    cin >> a >>  b >> c;
    
    if (a < b && a < c){
        cout << "Min: " << a;
        
    }
    else if  (b < a && b < c){
        cout << "Min: " << b;
        
    }
    else {
      cout << "Min: " << c;  
    }
    
    return 0;
}
