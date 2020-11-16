#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int size, count, lent;
    char letter[size];
    int checker = 0 ;
    
    cout << "Give array size: ";
    cin >> size;
    
    while (size < 1 || size > 20 ){
        
        cout << "Wrong size. Give array size: ";
        cin >> size;
    }
    
    cout << "Give " << size << " character(s): ";
    for (count = 0; count < size; count++){
        cin >> letter[count];
    }
    
    lent = strlen(letter);
    
    for(count = 0; count < lent; count++){
        if(letter[count] != letter[lent - count -1]){
           
               cout << "Given characters don't create palindrome.";
               break;
           
        }
        else{
            cout << "Given characters create palindrome."; 
            break;
        }
        
    }
   
    
    return 0;
}
