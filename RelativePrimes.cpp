#include<iostream>
using namespace std;
int relative(int a, int b){
    int i;
    int sta;
    
    for (i = 1; i <= a; i++){
        if(a % i == 0 && b % i ==0){
            sta = i;
        }
        
    }
    return sta;
}


int main(){
    int num1, num2;
    cout << "Give two numbers: ";
    cin >> num1 >> num2;
    
    if(num1 > 0 && num2 > 0){
        if(relative(num1, num2) == 1) {
            cout << "Numbers " << num1 << " and " << num2 <<" are relatively prime";
        }
        else{
            cout << "Numbers " << num1 << " and " << num2 <<" are not relatively prime";
        }
    }
    else{
        cout << "Numbers must be greater than 0!";
    }
    return 0;
}
