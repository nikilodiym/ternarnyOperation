#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    string result = (number % 2 == 0) ? "steamy" : "odd";
    cout << "This number is: " << result << endl;


	system("pause");
    return 0;
}