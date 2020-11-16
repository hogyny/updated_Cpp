#include <iostream>
using namespace std;

int main(){
    int pick;
    cout << "Choose your beverage: 1. Coke, 2. Water, 3. Sprite, 4. Fanta, 5. Pepsi" << endl;
    cin >> pick;
    
   
    
    
        switch (pick){
            case 1:
            cout <<"You chose Coke.";
            break;
            
            case 2:
            cout <<"You chose Water.";
            break;
            
            case 3:
            cout <<"You chose Sprite.";
            break;
            
            case 4:
            cout <<"You chose Fanta.";
            break;
            
            case 5:
            cout <<"You chose Pepsi.";
            break;
            
            default:
            cout << "Error: choice was not valid, here is your money back.";
        
        }

    return 0;
}
