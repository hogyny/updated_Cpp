#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char arr[100];
    char counter[256] = {0};
    char result;
    int count, lent, mode = 1;
    cout << "Enter a sequence of characters: ";
    cin >> arr;
    
    lent = strlen(arr);
    
    
    
    
    
    for (int i = 0; i < lent; i++) { 
        counter[arr[i]]++; 
    }
    for (int i = 0; i < 256; i++) { 
        
        if(counter[i] > counter[mode])
		{
			mode= i;
		}
    } 
    
    cout << "Most frequent character: " << (char)mode;
    
    
    
 return 0; 
}
