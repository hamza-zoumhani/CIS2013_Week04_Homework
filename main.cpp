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
	if (age >= 30){
		jacket = (h*w)/288 + (1/8)*(age/10);
	}
	else{
		jacket = (h*w)/288;
	}
	cout << "Your Jacket size is: " << jacket << endl;
}

int main(){
	getHeight();
	getWeight();
	getAge();
	
	hatsize();
	jacketsize();
	
	
	return 0;
}