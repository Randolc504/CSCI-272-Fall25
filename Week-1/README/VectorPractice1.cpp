#include <iostream>
#include <vector>
using namespace std;


int main(){
	
	vector<double> prices = {1,2,3,4,5};
	
	prices.push_back(10);
	prices.push_back(50);
	prices.push_back(11);
	
	
	
	double total = prices[0] + prices [1] + prices[2];
	
	cout << "Total = $" << total << endl;
	prices.insert(prices.begin(), 20);
	
	cout << "First item: " << prices.front() << endl;
	cout << "Last item: " << prices.back() << endl;
	cout << "Total size of my vector (prices): " << prices.size() << endl;
	
	
	
	double total2 = prices[0] + prices [1] + prices [2];
	
	cout << "Total = $" << total2 << endl;
	
	return 0;
	
}


