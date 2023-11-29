#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include "money.h"
using namespace std;

//Class for amounts of money in U.S. currency

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
