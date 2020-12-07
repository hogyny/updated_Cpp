#include<iostream>

using namespace std;

int main(){
    cout << "this program display array of 5 numbers \n";
    int arr[5];
    
    int a;
    
    //input
    for (int i =0; i < 5; i++){
        a = i + 1;
        cout << "enter " << a << " Element: " ;
        cin >> *(arr + i);
       
        
    }
    
    //output
    a= 0;
    cout << "\n output \n";
    
     for (int i =0; i < 5; i++){
        a = i + 1;
       cout << "Array " << a << " Element: " << *(arr + i) << endl;
        
    }
    
return 0;
}
