#include "Car.h"
#include <iostream>
#include <string>

using namespace std;;

int main(){
	Car car1; // object created // deault constructer
	Car car2 ("Tesla", "Model X", 2025); //parameterized constructer
	Car car3(car2);
	
	Car* pCar1 = new Car;
	Car* pCar2 = new Car("Tesla", "Model Y", 2025);
	Car car[20];
	
	
	car1.startEngine();
	car2.startEngine();
	car3.startEngine();
	
	pCar1->startEngine();
	pCar2->startEngine();
	
	car[15].startEngine();
	//car1.accelerate();
	return 0;
	
}