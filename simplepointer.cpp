#include<iostream>

using namespace std;



int *first, *second, *third;

int main(){
    int a = 0, b = 0, sum = 0;
    
    int *first  , *sec , *third ;
    first = &a;
    sec = &b;
    third = &sum;
    
    cout << "enter two numbers use space to separate: ";
    cin >> *first >> *sec;
    sum = *first + *sec;
    *third = sum;
    
    cout << "value stored in pointer, Display sum as: " << *third;
    
    return 0;
}
