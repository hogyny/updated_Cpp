#include<iostream>
using namespace std;

void sum(int b[], int a){
	int summer;
	for (int i = 0; i < a; i++){
		summer = summer + b[i];
		
	}
	cout <<"Sum of elements: " << summer <<endl;
}

void positive(int b[], int a){
	int counter=0;
	for (int i = 0; i < a; i++){
		if(b[i] > 0){
		counter++;	
		}
		
		
	}
	cout <<"Number of positive values: " << counter <<endl;
}

void maximum(int b[], int a){
	int maxi = b[0];
	for (int i = 1; i < a; i++){
		if(b[i] > maxi){
		maxi = b[i]	;
		}
		
		
	}
	cout <<"Maximum value: " << maxi <<endl;
}

void minimum(int b[],int a){
	int mini = b[0];
	for (int i = 1; i < a; i++){
		if(b[i] < mini){
		mini = b[i]	;
		}
		
		
	}
	cout <<"Minimum value: " << mini <<endl;
}

int main(){
	int a;
	cout <<"Enter array size" <<endl;
	cin >> a;
	int arr[a];
	if(a > 20 || a < 1){
		cout <<"Wrong array size";
	}
	else {
	cout <<"Enter " << a << " elements: " ;
		for (int i = 0; i < a; i++){
		cin >> arr[i];
	}
	
		sum(arr, a);
		positive(arr, a);
		maximum(arr, a);
		minimum(arr, a);
	}
	
	return 0;
}
