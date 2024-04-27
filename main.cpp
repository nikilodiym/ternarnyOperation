#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2, temp;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    if (num1 == num2) {
        cout << "The entered numbers are equal." << endl;
    }
    else {

        if (num1 > num2) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        cout << "Numbers in ascending order: " << num1 << ", " << num2 << endl;
    }


	system("pause");
    return 0;
}