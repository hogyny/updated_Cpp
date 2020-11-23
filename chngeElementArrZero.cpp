#include<iostream>
using namespace std;

int divide(int  a[], int i){
        if (a[i] % 3 == 0){
            a[i] = 0;
            return a[i];
            
        }
        else{
            
            return a[i];
             
        }
    
}

void zeros( int zero[], int size ){
    int counter = 0;
    for (int i = 0; i < size; i++){
        if (zero[i] != 0){
           zero[counter++] = zero[i];
           
        }
    }
    while(counter < size){
        zero[counter++] = 0;
    }
}



int main(){
    const int n = 10;
    int num[n];
    int count;
    
    cout << "Give ten numbers: ";
    for(count = 0; count < n; count++){
        cin >> num[count];
    }
    
    cout << "Result: " ;
    for(count = 0; count < n; count++){
        
        num[count] = divide(num, count);
        //cout  << num[count] << " ";
        
    }
      zeros(num, n);
    for (count = 0; count < n; count++){
        cout  << num[count] << " ";
    }
       
        
    return 0;
}
