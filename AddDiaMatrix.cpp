#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int size1, size2, i, j;
    double sum ;
    int summer;
    
    cout << "Give number of rows and columns: ";
    cin >> size1 >> size2;
    
    double arr[size1][size2];
    
    if(size1 != size2 || size1 < 1 || size1 > 11 || size2 < 1 || size2 >11){
        if(size1 == 0 || size2 == 15  ){
            cout <<"Wrong matrix sizes!";
        }
        
        else {
         cout <<"Matrix is not square!";
        }
    }
        
    
        
    else {
            cout << "Give matrix elements: ";
            for (i = 0; i < size1; i++){
                for(j = 0; j < size2; j++){
                    cin >> arr[i][j];
                }
            }
                
                for (i = 0; i < size1; i++){
                for(j = 0; j < size2; j++){
                    if(i == j){
                        sum = sum + arr[i][j]; 
                        
                    }
                }    
            }
           
            if (int(sum) == sum){
                cout << "Matrix trace is " << sum <<".";
            }
            else{
                summer = sum;
                sum = sum - summer;
                
                if(sum > 0.5 ){
                    sum +=summer;
                    cout << fixed << showpoint <<setprecision(2) << "Matrix trace is "  << sum << ".";
                }
                else{
                    sum +=summer;
                   cout << fixed << showpoint <<setprecision(1) << "Matrix trace is " << sum << ".";
                }
            }
            
    }
        
   
    
    return 0;
