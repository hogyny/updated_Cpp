#include<iostream>
using namespace std;

int main(){
    const int n = 10;
    int num[n];
    int count, v;
    
    cout << "Give 10 numbers: ";
    for(count = 0; count < n; count++){
        cin >> num[count];
    }
    
    cout << "Give V: ";
    cin >> v;
    for (count = 0; count < n; count++){
        if(v != num[count] ){
            if(count+1 == n){
                cout << "Answer: V is not in the array";
               
            }
            else{
                 continue;
            }
           
           
            
        }
        
        else{
            cout << "Answer: V is in the array";
            break;
        }
        
    }
    
    
            
        
    return 0;
}
