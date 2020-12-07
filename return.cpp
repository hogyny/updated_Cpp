#include<iostream>
#include<iomanip>

using namespace std;

//funtion of max

double maxi(double *one, double *second){
    
    
    if (*one > *second){
        return *one;
    }
    else{
        return *second;
    }
}


int main(){
    cout << fixed << showpoint << setprecision(2);
    cout << "this program display the MAX of 2 Numbers \n";
    
    double a = 0, b = 0, c =0;
    double *first , *sec;
    first = &a;
    sec = &b;
    cout << "Enter two numbers and use space to separate the numbers: ";
    cin >> *first >> *sec;
    
    cout << "\n \n";
    c= maxi(first, sec);
    
    cout <<"Max of the user input is: " << c;
    
return 0;
}
