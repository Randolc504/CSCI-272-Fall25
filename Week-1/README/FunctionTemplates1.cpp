#include <iostream>

using namespace std;

//template <typename T>
//T maxNum(T a, T b) {
//	return (a > b) ? a : b;
//}


//int main() {
//	int intMax = maxNum(5,10);
//	double doubleMax = maxNum(2.5, 11.6);
	
//	cout << "Interger Max: " << intMax << endl;
//	cout << "Double Max: " << doubleMax << endl;
	
	
//}

template <typename T>
T mathFunc(T a, T b, T c){
	return a+b-c;
}

int main(){
	int mathCalc = mathFunc(20,30,40);
	double doubleCalc = mathFunc(11.11, 22.22, 33.00);
	
	cout << "Integer = " << mathCalc << endl;
	cout << "Double = " << doubleCalc << endl;
	 
	return 0;
}
