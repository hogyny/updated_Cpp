#include<iostream>
using namespace std;
int fact(int a){
    if (a == 0 || a ==1){
        return 1;
    }
    else {
        return fact(a-1) * a;
    }
    
}


int main(){
    int num, result;
    cout << "Give n: ";
    cin >> num;
    
    if (num >= 0){
        result = fact(num);
        cout << num << "! = " << result;
    }
    else{
        cout << "n should be >= 0!";
    }
    return 0;
}
