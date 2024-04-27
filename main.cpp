#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int number;

	cout << "Enter a four-digit number: ";
	cin >> number;
	cout << "" << endl;

	if (number < 1000 || number > 9999) {
		cout << "Enter a four-digit number: " << endl;
		return 1;
	}

	int number1 = number / 1000;
	int number2 = (number / 100) % 10;
	int number3 = (number / 10) % 10;
	int number4 = number % 10;

	int resultTask = number3 * 1000 + number4 * 100 + number1 * 10 + number2;

	cout << "Finall number: " << resultTask << endl;

	system("pause");
	return 0;
}