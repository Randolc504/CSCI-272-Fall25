#include <iostream>
using namespace std;

double divide(double a, double b) {
    return a / b;
}

int main() {
    double x, y;
    cout << "Give two numbers to divide: ";
    cin >> x >> y;
    if (y != 0) {
        cout << "Quotient =  " << divide(x, y) << endl;
    } else {
        cout << "Cant divide by zero" << endl;
    }
    return 0;
}