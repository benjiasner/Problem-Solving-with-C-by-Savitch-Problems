#include <iostream>
#include <math.h>
using namespace std;

class CDAccount 
{
private:
    double balance;
    double interestRate;
    int term; //months until maturity
    int balanceDollars;
    int balanceCents;

public:
//functions
    CDAccount(double dollars, double rate, int termInput);
    double getBalance();
    double getMaturityBalance();
    double getInterestRate();
    int getTerm();
    int getBalanceCents();
    int getBalanceDollars();
};


int main()
{
    CDAccount benjiAccount(10000, 0.02, 10);

    cout << "From his initial deposit of $";
    cout << benjiAccount.getBalance();
    cout << ", after ";
    cout << benjiAccount.getTerm();
    cout << " terms, and at an interest rate of ";
    cout << benjiAccount.getInterestRate();
    cout << ", Benji will have a balance of $";
    cout << benjiAccount.getMaturityBalance();
    cout << ". Or, more precisely, ";
    cout << benjiAccount.getBalanceDollars();
    cout << " dollars and ";
    cout << benjiAccount.getBalanceCents();
    cout << " cents.";
    return 0;
}

CDAccount::CDAccount(double dollars, double rate, int termInput){
    if ( (dollars < 0) || (rate < 0) || (term < 0)){
        cout << "Illegal values for initial balance, term, or interest rate.\n";
        return;
    }
    balance = dollars;
    interestRate = rate;
    term = termInput;
}

double CDAccount::getBalance(){
    return balance;
}

double CDAccount::getMaturityBalance(){
    return balance*pow( (1+interestRate), term);
}

double CDAccount::getInterestRate(){
    return interestRate;
}

int CDAccount::getTerm(){
    return term;
}

int CDAccount::getBalanceDollars(){
    return static_cast<int>(getMaturityBalance());
}

int CDAccount::getBalanceCents(){
    return static_cast<int>( 100*(getMaturityBalance() - static_cast<int>(getMaturityBalance())) );
}
