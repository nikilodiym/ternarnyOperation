#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int number, maximumNumber, i;

	cout << "Enter number 1: ";
	cin >> maximumNumber;

	for (i = 2; i <= 7; ++i) {
		cout << "Enter number " << i << ": ";
		cin >> number;
		if (number > maximumNumber) {
			maximumNumber = number;
		}
	}

	cout << "Maximum number is: " << maximumNumber << endl;

	system("pause");
	return 0;
}