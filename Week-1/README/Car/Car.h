#include <iostream>
#include <string>

using namespace std;

class Car{
	private:
		string brand{"Honda"};
		string model = "Civic";
		int year {2025};
	
	public:
		Car(){// default construction
		
		}
		
		Car(string b, string m, int y){
			brand = b;
			model = m;
			year = y;	
		}
		
		// copy constructer
		Car(const Car& other){
			brand = other.brand;
			model = other.model;
			year = other.year;
		}
		
		
		
		void startEngine(){
			cout << "Engine started for: " << year << " " << brand << " " << model << endl;
		}
		/*
		void accelerate(){
			cout << "Aceelerate car " << model << endl;
		}
		*/
};