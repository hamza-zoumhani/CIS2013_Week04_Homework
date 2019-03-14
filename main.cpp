#include <iostream>
using namespace std;

double h;
double w;
int age;

void getHeight(){
	cout << "\nPlease enter your Height in inches: " ;
	cin >> h;
}

void getWeight() {
	cout << "Please enter your Weight in pounds: " ;
	cin >> w;
}

void getAge(){
	cout << "Please enter your Age in years: " ;
	cin >> age;
}

void hatsize(){
	double hat = (w/h)*2.9;
	cout << "Your Hat size is: " << hat << endl;
}

void jacketsize(){
	double jacket;
	if (age > 39){
		if( age%10 =0){
			jacket= (h*w)/288 + (1/8)*(age/10);
	}
	else{
		jacket = (h*w)/288;
	}
	cout << "Your Jacket size is: " << jacket << endl;
}

void waistsize(){
	double waist;
	if(age >= 30 && age % 2 == 0){
		waist = w/5.7 + (1/10)*(age/2);
	}
	else{
		waist = w/5.7;
	}
	cout << "Your Waist size is: " << waist << endl;
}

int main(){
	cout << "Welcome to C++ clothing sizes! \n";
	char again = 'Y' && 'y';
	
	do{
		getHeight();
		getWeight();
		getAge();
		
		cout << endl;
		
		hatsize();
		jacketsize();
		waistsize();
		
		cout << "\nDo you need to go again (Y/n)? ";
		cin >> again;
		
	}while ('n' != again);
	
	return 0;
}