#include <iostream>

using namespace std;

double avg(int score[], int size){
	int sum = 0;
	
	for (int i = 0; i < size; i++){
		sum += score[i];
	}
	return (double)sum/size;
}

int main() {
	int userInput = 0;
	
	cout << "Enter the size of an array: " << endl;
	
	cin >> userInput;
	
	int score[userInput] {90, 85, 70, 95, 100};
	cout << "Average = " << avg(score, userInput) << endl;
	
}