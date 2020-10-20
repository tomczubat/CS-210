#ifndef SOURCE_REPOS_TEST_TEST_INVESTMEMT_H
#define SOURCE_REPOS_TEST_TEST_INVESTMEMT_H

# include <iostream>//check if i can remove this
# include <string>// check if i can remove this later too
# include <iomanip>

class Investment {

	public:
		Investment(); // default constructor
		Investment(double initialAmount, double monthlyDeposit, double annualInterest, int numYears);
		int getYears() const;
		void dispayWithoutAddDepo()const;
		void displayWithAddDepo() const;

	private:
		double m_initialAmount = 0.0;
		double m_monthlyDeposit = 0.0;
		double m_annualInterest = 0.0;
		int m_numYears = 0;

};
#endif
