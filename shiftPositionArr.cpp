#include<iostream>
using namespace std;

int main(){
    int n, p;
    cout << "Give N: ";
    cin >> n;
    int collection[n];
    
    if (n > 0 && n < 21){
        cout << "Give numbers: ";
        for (int i = 0; i < n; i++){
            cin >> collection[i];
        }
        
        cout << "Give p: ";
        cin >> p;
        if(p > 0){
            cout << "Before: [ ";
             for (int i = 0; i < n; i++){
                cout  << collection[i] << " ";
            }
            cout << "]";
            cout << endl;
            
            int n = sizeof(collection)/sizeof(collection[0]);
            for (int i = 0; i < p; i++){
                int last = collection[n - 1];
            	for (int i = n - 2; i >= 0; i--){
            		collection[i + 1] = collection[i];
            	}
            
            	collection[0] = last;
            }
            
        }
        cout << "After: [ ";
        for (int i = 0; i < n; i++){
            cout << collection[i]  << " ";
        }
        cout << "]";
    }
    
    else{
        cout << "N out of range!";
    }
    return 0;
}
