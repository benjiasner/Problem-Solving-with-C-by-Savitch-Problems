#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
using namespace std;

//Class for amounts of money in U.S. currency

class Money{
    public:
        friend Money operator +(const Money& amount1, const Money& amount2);

        friend Money operator -(const Money& amount1, const Money& amount2);

        friend Money operator -(const Money& amount);

        friend bool operator <(const Money& amoun1, const Money& amount2);

        friend bool operator <=(const Money& amoun1, const Money& amount2);

        friend bool operator >(const Money& amoun1, const Money& amount2);

        friend bool operator >=(const Money& amoun1, const Money& amount2);

        friend bool operator ==(const Money& amount1, const Money& amount2);

        Money(long dollars, int cents);

        Money(long dollars);

        Money();

        double getValue() const;

        double percent(int percentFigure) const;

        friend istream& operator >>(istream& ins, Money& amount);

        friend ostream& operator <<(ostream& outs, const Money& amount);

    private:
        long allCents;
};

int digitToInt(char c);

int main(){

    Money benjiWallet(1000, 10);
    Money benjiAccount(100, 23);

    if (benjiWallet > benjiAccount){
        cout << "Benji has more money in his wallet than in his bank account.\n";
    }else if(benjiWallet < benjiAccount){
        cout << "Benji has more money in his bank account than in his wallet.\n";
    }else if(benjiWallet == benjiAccount){
        cout << "Benji has the same amount of money in his bank account as in his wallet.\n";
    }

    cout << "In his wallet: $" << benjiWallet.getValue() << ".\n";
    cout << "In his bank account: $" << benjiAccount.getValue() << ".\n";

    return 0;
}

istream& operator >>(istream& ins, Money& amount){
    char oneChar, decimalPoint, digit1, digit2;
    long dollars;
    int cents;
    bool negative;

    ins >> oneChar;
    if (oneChar == '-'){
        negative = true;
        ins >> oneChar;
    }else{
        negative = false;
    }

    ins >> dollars >> decimalPoint >> digit1 >> digit2;

    if (oneChar != '$' || decimalPoint != '.' || !isdigit(digit1) || !isdigit(digit2)){
        cout << "Error illegal form for money input.\n";
        exit(1);
    }

    cents = digitToInt(digit1) * 10 + digitToInt(digit2);

    amount.allCents = dollars * 100 + cents;
    if (negative){
        amount.allCents = -amount.allCents;
    }
    return ins;
}

int digitToInt(char c){
    return ( static_cast<int>(c) - static_cast<int>('0'));
}

ostream& operator <<(ostream& outs, const Money& amount){
    long positiveCents = labs(amount.allCents);
    positiveCents = labs(amount.allCents);
    int dollars = positiveCents/100;
    int cents = positiveCents%100;

    if (amount.allCents < 0){
        outs << "- $" << dollars << '.';
    }else{
        outs << "$" << dollars << '.';
    }

    if (cents < 10){
        outs << cents;
    }

    return outs;
}

Money operator +(const Money& amount1, const Money& amount2){
    Money temp;
    temp.allCents = amount1.allCents + amount2.allCents;
    return temp;
}

Money operator -(const Money& amount1, const Money& amount2){
    Money temp;
    temp.allCents = amount1.allCents - amount2.allCents;
    return temp;
}

Money operator -(const Money& amount1){
    Money temp;
    temp.allCents = - amount1.allCents;
    return temp;
}

bool operator <(const Money& amount1, const Money& amount2){
    return (amount1.allCents < amount2.allCents);
}

bool operator <=(const Money& amount1, const Money& amount2){
    return (amount1.allCents <= amount2.allCents);
}

bool operator >(const Money& amount1, const Money& amount2){
    return (amount1.allCents > amount2.allCents);
}

bool operator >=(const Money& amount1, const Money& amount2){
    return (amount1.allCents >= amount2.allCents);
}

bool operator ==(const Money& amount1, const Money& amount2){
    return (amount1.allCents == amount2.allCents);
}

Money::Money(long dollars, int cents){
    if ( (dollars < 0) || cents < 0){
        cout << "Dollars and cents must both be positive values.";
    }
    allCents = dollars*100 + cents;
    return;
}

Money::Money(long dollars){
    if ( (dollars < 0) ){
        cout << "Dollars and cents must both be positive values.";
    }
    allCents = dollars*100;
}

Money::Money(){
    allCents = 0;
    return;
}

double Money::getValue() const{
    return static_cast<double>(allCents)*.01;
}

double Money::percent(int percentFigure) const{
    return .01*percentFigure*getValue();
}