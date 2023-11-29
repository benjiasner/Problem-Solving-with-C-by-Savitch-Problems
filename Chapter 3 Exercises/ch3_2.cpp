#include <iostream>
using namespace std;
//this program computes the interest due, total amount due, and minimum payment for a revolving credit account
// input: account balance
// interest: 1.5 percent on first 1000; 1 percent for any over
//minimum payment: total amount due if it is 10 or less; otherwise it is larger of 10 dollars or 10 percent of total
// program includes loop to let user repeat until she says done


int main() {

    double totalBalance;
    double minPayment;
    double const interestFirst = 0.015;
    double const interestSecond = 0.01;
    char charGo = 'y';

    do {

        cout << "This program tells you how much you owe each month in your revolving credit account.  Please enter your current balance in dollars: ";
        cin >> totalBalance;
        
        // current credit due calc:
        if (totalBalance <= 1000) {
            totalBalance = totalBalance*(1+interestFirst);
        } else {
            totalBalance = 1000*(1+interestFirst)+(totalBalance-1000)*(1+interestSecond);
        }
        
        // calculate payment:
        if (totalBalance <=10) {
            minPayment = totalBalance;
        } else if ((totalBalance*0.1) < 10) {
            minPayment = 10;
        } else {
            minPayment = totalBalance * 0.1;
        }
        
        cout << "You owe $";
        cout << minPayment;
        cout << " in payments this month.";

        charGo = 'n';

        cout << " Please enter 'Y' if you would like to calculate your monthly payment again: ";
        cin >> charGo;

    } while ((charGo == 'Y') || (charGo == 'y'));


    return 0;
}