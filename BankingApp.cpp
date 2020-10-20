// Tomasz Czubat

# include <iostream>
# include <iomanip>
# include <string>
# include <ios>
# include <cmath>
# include <stdexcept>
using namespace std;

# include "Investment.h"

void displayInputs() {
	
	// Display the inputs
	cout << setw(20) << right << "Data Input" << endl << endl;
	cout << "**Please input each category**" << endl << endl;

	cout << "Initial Investment Amount: " << endl;
	cout << "Monthly Deposit: " << endl;
	cout << "Annual Interest: " << endl;
	cout << "Nuber of years: " << endl;
}

int main() {

	// decalre variables for input
	string answer;
	double initialAmount,
		   monthlyDeposit,
		   annualInterest;
	int numYears;
	
	// Get asnwer from user and validate input
	cout << "Would you like to create an invstment? (yes or no) " << endl;
	cin >> answer;

	while (answer.compare("yes") == false) {
		cout << "Invalid input";
		cout << "Would you like to create an invstment? (yes or no) " << endl;
		cin >> answer;
	}
	
	while (answer == "yes") {

		// Display input menu
		displayInputs();

		// Get the inputs from the user
		cin >> initialAmount;
		cin >> monthlyDeposit;
		cin >> annualInterest;
		cin >> numYears;

		// create the investment object while passing the parameters
		Investment myInvestment(initialAmount, monthlyDeposit, annualInterest, numYears);	
		
		// Call the functions to display the data
		myInvestment.dispayWithoutAddDepo();
		myInvestment.displayWithAddDepo();
		
		

		cout << "would you like to create another investment? (yes or no)" << endl;
		cin >> answer;
	}
	cout << "Exiting program" << endl;
	
	return 0;
}