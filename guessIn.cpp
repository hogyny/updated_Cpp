#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main(){
    srand ((unsigned) time(0));
    int random, seed , shot;
    char coice;
    random = rand() % 100 + 1;
    cout << "Random seed (Y - yes)? ";
    cin >> coice;
    
    switch (coice){
        case 'Y':
        case 'y':
        
        do{
        cout << "Your shot: ";
        cin >> shot;
        if (shot < random){
            cout << "Too low, try again." <<endl;
        }
        else if (shot > random){
            cout << "Too high, try again." << endl;
        }
        else {
            cout << "That's it! Good job!" << endl;
        }
        } while (shot != random);
        break;
        
        
        case 'N':
        case 'n':
        
        
        cout << "Set seed to value: ";
        cin >> seed;
    
       if(seed > 0 && seed > 100){
            cout << "The number between the range 1-100 was drawn" << endl; 
            do{
                
                    cout << "Your shot: ";
                    cin >> shot;
            if (shot < seed){
                cout << "Too low, try again." <<endl;
            }
            else if (shot < seed){
                cout << "Too high, try again." << endl;
            }
            else {
                cout << "That's it! Good job!" << endl;
            }
            
            
            }while ( shot != seed);
        
       }
        
        else if (seed >= 0 && seed <= 100){
            do{
                
                    cout << "Your shot: ";
                    cin >> shot;
            if (shot < seed){
                cout << "Too low, try again." <<endl;
            }
            else if (shot < seed){
                cout << "Too high, try again." << endl;
            }
            else {
                cout << "That's it! Good job!" << endl;
            }
            
            
            }while ( shot != seed);
        
        
        
        }    
        
    else{
        cout << "Seed must be a positive value!" << endl;
    }
    
       break; 
    }
    
    return 0;
}
