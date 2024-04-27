#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int firstNumber, secondNuber;
	cout << "Enter a first number: ";
	cin >> firstNumber;
	
	cout << "Enter a second number: ";
	cin >> secondNuber;

	if (firstNumber < secondNuber) {
		cout << "Smaller number: " << firstNumber << endl;
	}
	else if (firstNumber > secondNuber) {
		cout << "Smaller number: " << secondNuber << endl;
	}
	else {
		cout << "The numbers are the same: " << secondNuber << endl;
	}

	system("pause");
	return 0;
}