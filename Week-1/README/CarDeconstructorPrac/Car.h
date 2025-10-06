#include <iostream>
#include <string>

using namespace std;

// define a class named Car
class Car{
	private:
		string brand = "Toyota";
		string model = "Camry";
		int year = 2022;
	public:
		Car(){
			// nothing here the defaults already handle it
		}
		
		~Car(){
			cout << "Destroy " << brand << " " << model << " " << year << endl;
		}
		
		// Paramterized Constructor
		Car(string b, string m, int y){
			brand = b;
			model = m;
			year = y;
		}
		
		// Copy constructor
		Car(const Car & other){
			brand = other.brand;
			model = other.model;
			year = other.year + 1;
		}
		
		// member function
		void startEngine(){
			cout << "Start Enging for: " << "Brand: " << brand << " | Model: " << model << " | Year: " << year << endl;
		}
		
		void accelerate(){
			cout << "Acelerate engine: " << "Brand: " << brand << " | Model: " << model << " | Year: " << year << endl;
		}
	
};
