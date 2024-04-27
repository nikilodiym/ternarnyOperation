#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int number;

    cout << "Enter a six-digit number: ";
    cin >> number;

    if (number < 100000 || number > 999999) {
        cout << "Error! Enter a six-digit number." << endl;
    }
    
    string numStr = to_string(number);
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < 3; ++i) {
        sum1 += numStr[i] - '0';
        sum2 += numStr[i + 3] - '0';
    }

    if (sum1 == sum2) {
        cout << "Numeric " << number << " is happy!" << endl;
    }
    else {
        cout << "Numeric " << number << " is not happy." << endl;
    }

	system("pause");
	return 0;
}