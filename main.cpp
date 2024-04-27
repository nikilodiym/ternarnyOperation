#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int localAB, localBC, weightOfTheAircraft, fuelConsumption;

	cout << "Enter the distance between points A and B: ";
	cin >> localAB;
	cout << "Enter the distance between points B and C: ";
	cin >> localBC;
	cout << "Enter the weight of the aircraft: ";
	cin >> weightOfTheAircraft;

	if (weightOfTheAircraft <= 500) {
		fuelConsumption = 1;
	}
	else if (weightOfTheAircraft <= 1000) {
		fuelConsumption = 4;
	}
	else if (weightOfTheAircraft <= 1500) {
		fuelConsumption = 7;
	}
	else if (weightOfTheAircraft <= 2000) {
		fuelConsumption = 9;
	}
	else {
		cout << "The plane cannot take off!" << endl;
		return 0;
	}

	int totalFuel = (localAB + localBC) * fuelConsumption;

	cout << "Total fuel consumption: " << totalFuel << " liters" << endl;

	system("pause");
	return 0;
}