#include<iostream>
#include<string>

using namespace std;

struct Student{
    string name;
    string surname;
    int age;
    int id;
};

int main(){
    Student doc;
    doc.name = "Mark";
    doc.surname = "Zee";
    doc.age = 20;
    doc.id = 20170;
    
    cout << doc.name << " " << doc.surname << endl;
    cout<<"ID: " <<doc.id <<"  Age: "<<doc.age;
    
    return 0;
}

//----------------------------------------------------------------------------------------------
//new main structure program
#include<iostream>
#include<iomanip>


using namespace std;

struct Rectangle{
    double width;
    double height;
    double area;
    double perimeter;
};

int Area(Rectangle rect){
    
    rect.area = rect.width * rect.height;
    return rect.area;
    
}

double Per(Rectangle rect){
    
    rect.perimeter = 2 * (rect.width + rect.height);
    return rect.perimeter;
    
}

int main(){
    Rectangle rect;
    int a,b;
    cout <<"Enter the width and height of the rectangle: ";
    cin >>a >> b;
    if (a < 1|| b < 1){
        cout << "Wrong input data.\n";
    }
    else{
        rect.width = a;
        rect.height =b;
        
        rect.area = Area(rect);
        rect.perimeter = Per(rect);
        cout <<"A rectangle has been defined with " <<rect.width <<" width, "<<rect.height<<" height, area equal to "<<rect.area<<" and perimeter of "<<rect.perimeter<<".";
    }
    
    
    return 0;
}

//--------------------------------------------------------------------------------------------
//new main strcture and enumeration function
#include<iostream>
#include<string>

using namespace std;

enum Color{RED, GREEN, BLUE, CYAN, MAGENTA, BLACK, YELLOW};

int main(){
    int a;
    cout <<"Select a color (0-6): ";
    cin >> a;
    
    switch (a){
        case RED:
        cout<< "You selected red.";
        break;
        
        case GREEN:
        cout<< "You selected green.";
        break;
        
        case BLUE:
        cout<< "You selected blue.";
        break;
        
        case CYAN:
        cout<< "You selected cyan.";
        break;
        
        case MAGENTA:
        cout<< "You selected magenta.";
        break;
        
        case BLACK:
        cout<< "You selected black.";
        break;
        
        case YELLOW:
        cout<< "You selected yellow.";
        break;
        
        default:
        cout <<"No such color";
    }
    
    return 0;
}

//----------------------------------------------------------------------------------
#include<iostream>
#include<string>

using namespace std;

    enum Month{JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEPT, OCT, NOV, DEC};
    enum DayOfweek{MON, TUE, WED, THUR, FRI, SAT, SUN};

struct Date{
    int day;
    int year;
    Month myMonth;
    DayOfweek myWeek;
};

int main(){
    Date doc[7];
    int i;
    
     
    for(i =0; i < 7; i++){
        doc[i].day = 0;
        doc[i].year =2020;
        doc[i].myMonth = NOV;
        doc[i].myWeek = static_cast<DayOfweek>(doc[i].day);
        switch (i){
            case MON:
            cout <<"Today is day "<<i+1 <<" & it is Monday/ "<<doc[i].myMonth <<" year "<< doc[i].year<<"\n";
            break;
            
            case TUE:
            cout <<"Today is day "<<i+1 <<" & it is Tueday/ "<<doc[i].myMonth <<" year "<< doc[i].year<<"\n";
            break;
            
            case WED:
            cout <<"Today is day "<<i+1 <<" & it is Wednesday/ "<<doc[i].myMonth <<" year "<< doc[i].year<<"\n";
            break;
            
            case THUR:
            cout <<"Today is day "<<i+1 <<" & it is Thursday/ "<<doc[i].myMonth <<" year "<< doc[i].year<<"\n";
            break;
            
            case FRI:
            cout <<"Today is day "<<i+1 <<" & it is Friday/ "<<doc[i].myMonth <<" year "<< doc[i].year<<"\n";
            break;
            
            case SAT:
            cout <<"Today is day "<<i+1 <<" & it is Saturday/ "<<doc[i].myMonth <<" year "<< doc[i].year<<"\n";
            break;
            
            case SUN:
            cout <<"Today is day "<<i+1 <<" & it is Sunday/ "<<doc[i].myMonth <<" year "<< doc[i].year<<"\n";
            break;
            doc[i].day++;
        }
        
    }
    
    return 0;
}

//-------------------------------------------------------------------------------------------------------------------------------
//new main structure and enum
#include<iostream>
#include<string>

using namespace std;
enum type{LECTURE, TUTORIAL, LAB, PROJECT};

struct Result{
    string name;
    int ects;
    int grade[6]={0, 1, 2, 3 , 4 ,5};
    type asType;
    
};

int main(){
    Result Rex;
    int *arr;
    arr = new int[10];
    char tex;
    int use,a,b;
    cout <<"Are you willing to add another result, enter Y for Yes or N for No\n";
    cin >> tex;
    int i = 0;
    string reports;
    if (tex =='Y'){
    while(tex =='Y' && arr[i] < 11){
        cin.ignore();
        arr[i];
        cout << "Enter Name: ";
        cin >>Rex.name;
        arr[i++];
        cout<<"Enter ECTS as integer: ";
        cin >>Rex.ects;
        arr[i++];
        
        cout <<"choose grade between 0 to 5: ";
        cin >> a;
        Rex.grade[a];
        arr[i++];
        cout<<"type of course to be save, Enter 0 for Lecture, 1 for Tutorial, 2 for Lab or 3 for project: ";
        cin >> b;
        switch(b){
            case LECTURE:
            reports = reports + "NAME: "+ Rex.name + ", " + "ECTS: "+ to_string(Rex.ects) + ", " + "GRADE: " +to_string(Rex.grade[a]) + ", TYPE: Lecture." + "\n";
            break;
            case TUTORIAL:
            reports = reports + "NAME: " + Rex.name + ", " + "ECTS: " + to_string(Rex.ects) + ", " + "GRADE: " + to_string(Rex.grade[a]) + ", TYPE: Tutorial." + "\n";
            break;
            case LAB:
            reports = reports + "NAME: " + Rex.name + ", " + "ECTS: " + to_string(Rex.ects) + ", " + "GRADE: " + to_string(Rex.grade[a]) + ", TYEP: Lab."+ "\n";
            break;
            case PROJECT:
            reports = reports + "NAME: " + Rex.name + ", " + "ECTS: " + to_string(Rex.ects) + ", " + "GRADE: " + to_string(Rex.grade[a]) + ", TYPE: Project."+ "\n";
            break;
        }
        arr[i++];
        
         cout <<"Are you willing to add another result, enter Y for Yes or N for No:\n";
         cin >> tex;
         arr[i++];
         
         
        
    }
    cout <<"Data inputted and stored:\n";
    cout << reports;
    }
    else{
        cout << "You acceptted, that you have no more result to enter.";
    }
    
    
    
    
    
    return 0;
}
