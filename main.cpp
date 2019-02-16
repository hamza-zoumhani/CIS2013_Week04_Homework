#include <iostream>
#include <iomanip>
using namespace std;

int h;
int w;
int age;

void getHeight(){
	cout << "Please enter your Height in inches: " ;
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
	if (age >= 30 && age% 10 == 0){
		jacket = (h*w)/288 + (1/8)*(age/10);
	}
	else{
		jacket = (h*w)/288;
	}
	cout << "Your Jacket size is: " << jacket << endl;
}

void waistsize(){
	double waist;
	if(age >= 30 && age%2 == 0){
		waist = w/5.7 + (1/10)*(age/2);
	}
	else{
		waist = w/5.7;
	}
}

int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	
	getHeight();
	getWeight();
	getAge();
	
	hatsize();
	jacketsize();
	waistsize();
	
	return 0;
}