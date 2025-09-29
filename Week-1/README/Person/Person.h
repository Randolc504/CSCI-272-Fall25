#include <iostream>
using namespace std;

class Person{
	public:
		string name {"John Doe"};
		int age{30};
		char gender {'F'};
	public:
		void introduce(){
			cout << "I'm " << name << ". Age: " << age;
			if (gender == 'M'){
				cout << " I identifiy as a male" << endl;
			} else if (gender == 'F'){
				cout << " I identify a a female" << endl;
			} else {
				cout << " Gender not specified." << endl;
			}
		}
};