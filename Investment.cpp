# include <iostream>
# include <string>
# include <iomanip>
# include <ios>
# include <cmath>
using namespace std;

# include "Investment.h"

// default constructor 
Investment::Investment() {}

Investment::Investment(double initialAmount, double monthlyDeposit, double annualInterest, int numYears) {

	// Set all the the member variables
	m_initialAmount = initialAmount;
	m_monthlyDeposit = monthlyDeposit;
	m_annualInterest = annualInterest ;
	m_annualInterest = m_annualInterest / 100; // to store as decimal
	m_numYears = numYears;

}


void Investment::dispayWithoutAddDepo() const {

	// declare variables
	double yearEndBalance;
	double currentMonths = 12;
	double currentEarnedInterest;
	
	// Calculate the compound interest
	yearEndBalance = pow(m_initialAmount + (m_annualInterest / 12), currentMonths);
	
	// Calculate the earned interest
	currentEarnedInterest = m_initialAmount * m_annualInterest;

	// Display the results
	cout << setw(60);
	cout << "Balance and Interest without Additional Monthly Deposits" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "Year\tYear End Balanc\t\tYear End Earned Interest" << endl;
	cout << "------------------------------------------------------------" << endl;

	for (int i = 1; i <= m_numYears; i++) {
		cout << fixed << setprecision(2);
		cout << "  " << i << "\t\t$" << yearEndBalance;
		cout << "\t\t$" << fixed << setprecision(2); 
		cout << currentEarnedInterest << endl;
		
		currentMonths += 12;
		yearEndBalance = pow(m_initialAmount + (m_annualInterest / 12), currentMonths);
		currentEarnedInterest = yearEndBalance * m_annualInterest;

	}
	cout << endl << endl;


}

void Investment::displayWithAddDepo() const {

	double yearEndBalance;
	yearEndBalance = m_initialAmount + m_monthlyDeposit;
	int currentMonths = 12;

	// calculate the aual interest
	double currentEarnedInterest = (m_initialAmount + m_monthlyDeposit) * (m_annualInterest / 12);
	
	// Display the results
	cout << setw(60);
	cout << "Balance and Interest With Additional Monthly Deposits" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "Year\tYear End Balanc\t\tYear End Earned Interest" << endl;
	cout << "------------------------------------------------------------" << endl;

	for (int i = 1; i <= m_numYears; i++) {
		
		yearEndBalance = pow(yearEndBalance + ( 1 +(m_annualInterest / 12)), currentMonths);

		cout << fixed << setprecision(2);
		cout << "  " << i << "\t\t$" << yearEndBalance;
		cout << "\t\t$" << fixed << setprecision(2);
		cout << currentEarnedInterest << endl;

		
		yearEndBalance += m_monthlyDeposit;
	}
	cout << endl << endl;

}







