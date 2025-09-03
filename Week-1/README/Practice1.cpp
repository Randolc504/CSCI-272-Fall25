#include <iostream>

using namespace std;



int main() {
	int score[5] = {90, 85, 70, 95, 100};
	int sum = 0;
	
	for (int i = 0; i < 5; i++){
		sum += score[i];
	}
	
	cout << "Average = " << sum / 5 << endl;
	
	return 0;
}