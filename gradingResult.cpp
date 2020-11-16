#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b, c;
    float Average;
    cout << "Give your quiz, mid-term and final scores in ['%]: ";
    cin >> a >>  b >> c;
    
    if (a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100 ){
        
        cout <<"Error: Wrong data!";
    }
   else{
        Average = (a + b + c)/ 3.0;
       if (Average >= 90){
           cout << fixed << showpoint << setprecision(2) << "Your average score is " << Average << " % and your grade is A.";
       }
       
       else if (Average >= 70 && Average < 90){
           cout << fixed << showpoint << setprecision(2) << "Your average score is " << Average << " % and your grade is B.";
       }
       
       else if (Average >= 50 && Average < 70){
           cout << fixed << showpoint << setprecision(2) << "Your average score is " << Average << " % and your grade is C.";
       }
       
       else {
           cout << fixed << showpoint << setprecision(2) << "Your average score is " << Average << " % and your grade is F.";
       }
      
       
   } 
    return 0;
}
