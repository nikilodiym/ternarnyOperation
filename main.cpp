#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int number;

	cout << "Enter a number: ";
	cin >> number;

	if (number > 0) {
		cout << "The entered number is positive" << endl;
	}
	else if (number < 0) {
		cout << "The entered number is negative" << endl;
	}
	else {
		cout << "The entered number is zero" << endl;
	}

	system("pause");
	return 0;
}