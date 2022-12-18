/*AirGead Banking App
Erika Rodriguez
CS - 210 
Professor Chan
12/2/2022*/

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	//declaring variables
	float initInv, monDep, anuInt, months, years;
	float totalAm, intAmt, yearTotInt;
	cout << "********************************\n";
	cout << "********** Data Input **********\n";
	cout << "Initial Investment Amount: \n";
	cout << "Monthly Deposit: \n";
	cout << "Annual Interest: \n";
	cout << "Number of years: \n";
	//pause command "press any key to contiue..."
	system("PAUSE");
	cout << "********************************\n";
	cout << "********** Data Input **********\n";
	cout << "Initial Investment Amount: $";
	cin >> initInv; //get initial investment
	cout << "Monthly Deposit: $";
	cin >> monDep; //get monthly deposit 
	cout << "Annual Interest: %";
	cin >> anuInt; //get annual interest
	cout << "Number of years: ";
	cin >> years; //get number of years
	months = years * 12;
	//pause command "press any key to continue..."
	system("PAUSE");
	//begin with initial investment
	totalAm = initInv;
	//print balance without monthly deposit
	cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
	cout << "==============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "--------------------------------------------------------------\n";
	//calculate 
	for (int i = 0; i < years; i++)
	{
		intAmt = (totalAm) * ((anuInt / 100));
		totalAm = totalAm + intAmt;
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << intAmt << "\n";
	}
	//begin with initial investment 
	totalAm = initInv;
	//print balance with monthly deposit
	cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
	cout << "==============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "--------------------------------------------------------------\n";
	//calculate
	for (int i = 0; i < years; i++)
	{
		yearTotInt = 0;
		for (int j = 0; j < 12; j++)
		{
			intAmt = (totalAm + monDep) * ((anuInt / 100) / 12);
			yearTotInt = yearTotInt + intAmt;
			totalAm = totalAm + monDep + intAmt;
		}
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << yearTotInt << "\n";
	}
	return 0;
}