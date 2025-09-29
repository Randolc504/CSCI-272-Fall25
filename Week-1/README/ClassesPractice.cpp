#include <iostream>
#include <string>

using namespace std;

class Car{
	private:
		string brand{"Honda"};
		string model = "Civic";
		int year {2025};
	
	public:
		void startEngine(){
			cout << "Engine started for: " << year << " " << brand << " " << model << endl;
		}
		void accelerate(){
			cout << "Aceelerate car " << model << endl;
		}
};
int main(){
	Car car1; // object created
	
	car1.startEngine();
	car1.accelerate();
	return 0;
	
	
	
	
	
	
	
}