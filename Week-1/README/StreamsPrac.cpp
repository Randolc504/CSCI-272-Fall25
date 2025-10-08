#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
int main(){
	int number;
	
	cout << "Enter a number: ";
	cin >> number;
	cout << "You entered: " << number << endl;
	
	cerr << "This is an error message." << endl;
	
	clog << "This is a log message." << endl;
	
	return 0;
}
*/

/*
int main(){
	string item = "Coffee";
	double price = 2.5;
	double tax = 0.201;
	double total = price + tax;
	
	cout << setw(10) << left << "Item" << setw(10) << right << "Price" << endl;
	cout << setw(10) << left << item << setw(10) << right << fixed << setprecision(5) << total << endl;
	cout << setw(10) << setfill('-') << "Menu" << endl << setw(10) << left << item << setw(10) << right << total << endl;
}
*/

class Card {
	public:
		int cardNumber;
		string cardHolder;
};

typedef Card* CardPtr; // Cardptr is an alias of Card*

typedef double DB; // DB is an alias of double

int main(){
	Card myCard;
	
	myCard.cardNumber = 12345;
	myCard.cardHolder = "Alice";
	CardPtr PtrtoCard = &myCard;
	
	cout << "Card Holder: " << PtrtoCard -> cardHolder << endl;
	cout << "Card Number: " << PtrtoCard -> cardNumber << endl;
	
	return 0;
}