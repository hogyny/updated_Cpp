#include<iostream>

using namespace std;



void maxi(int *arr, int n){
    int i;
    int a = n;
    int *arra;
    arra= new int[n*2];
    
    for(int i = 0; i < (n*2); i++){
        if(i >= a){
            *(arra + i) = 0;
           
           cout << *(arra + i);
            
        }
        else{
            *(arra + i) = *(arr +i);
           
           cout << *(arr + i);
        }
        
    }
    delete [] arra;
}


int main(){
    int size;
    cout << "input size of array: ";
    cin >> size;
    int arrays[size];
    for(int i = 0; i < size; i++){
        cout << "Enter " << i+1 << " Element: ";
        cin >> arrays[i];
    }
     maxi(arrays, size);
    
    
    
    
return 0;
}
