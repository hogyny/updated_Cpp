#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float a, b, c, Dem , root1, root2;
    cout << "Enter coefficient a: ";
    cin >> a  ;
    cout << "Enter coefficient b: ";
    cin >> b ;
    cout << "Enter coefficient c: ";
    cin >> c ;
    
    Dem = (pow( b, 2) - (4 * a *c));
    
    if (a == 0){
        cout << "This is not a quadratic function!" <<endl;
    }
    
    else if (Dem > 0){
        root1 = ( (-b) + (sqrt(Dem))) / (2 * a);
        root2 = ( (-b) - (sqrt(Dem))) / (2 * a);
        cout << fixed << showpoint << setprecision(2) <<"Function has two real roots: x1 = " << root1 << ", x2 = " << root2 << endl;
    }
    
    else if (Dem == 0){
        root1 = (-b / (2 * a));
        cout << fixed << showpoint << setprecision(2) <<"Function has one real root: x1 = " << root1 << endl;
    }
    
    else {
        cout << "No real roots exist!";
    }
    return 0;
}
