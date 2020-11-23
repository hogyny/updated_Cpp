#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main(){
    int first, second, result;
    cout <<"Enter two numbers: ";
    cin >> first >> second ;
    
    result = sum(first, second);
    cout <<"The sum is " << result << ".";
    
    
    return 0;
}
