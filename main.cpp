#include <iostream>
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
	cout << "Your hat size is: " << hat << endl;
}

int main(){
	getHeight();
	getWeight();
	getAge();
	
	hatsize();
	
	
	
	return 0;
}