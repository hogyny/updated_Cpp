#include<iostream>
#include<bits/stdc++.h> //to call in built quick function, reverse with out using array
#include<cstring>
using namespace std;

void print_backward(char now){
    string z;
    cout << "Give characters: ";
   do{
        cin >> now;
        if(now == '.'){
            continue;
        }
        else{
          z = z + now + " " ;  
        }
        
        
    }while (now != '.');
    
    //cout << z;
    reverse(z.begin(), z.end());
    cout << "Backwards:" << z;
    
    
}

int main(){
    char word;
    
    print_backward(word);
    
    
    return 0;
}
