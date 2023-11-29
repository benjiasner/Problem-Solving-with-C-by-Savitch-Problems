#include <iostream>
#include <math.h>
using namespace std;

class ShowTicket {
    private:
        int row;
        int seat;
        bool seatSold;

    public:
        ShowTicket(int ticketRow, int ticketSeat);
        void setYesSold();
        void setNotSold();
        string soldStatus();
};

int main(){

    ShowTicket ticket11(1, 1), ticket12(1, 2), ticket21(2, 1), ticket22(2, 2);

    ticket11.setYesSold();
    ticket12.setYesSold();
    ticket21.setYesSold();
    ticket22.setNotSold();

    cout << "Row 1, Seat 1 is " << ticket11.soldStatus() << ".\n";
    cout << "Row 1, Seat 2 is " << ticket12.soldStatus() << ".\n";
    cout << "Row 2, Seat 1 is " << ticket21.soldStatus() << ".\n";
    cout << "Row 2, Seat 2 is " << ticket22.soldStatus() << ".\n";


    return 0;
}

ShowTicket::ShowTicket(int ticketRow, int ticketSeat){
    if ( (ticketRow < 0) || (ticketSeat < 0) ){
        cout << "Invalid ticket number.";
        return;
    }
    row = ticketRow;
    seat = ticketSeat;
    seatSold = false;
}

void ShowTicket::setYesSold(){
    seatSold = true;
    return;
}

void ShowTicket::setNotSold(){
    seatSold = false;
    return;
}

string ShowTicket::soldStatus(){
    if (seatSold==true){
        return "sold";
    }else{
        return "not sold";
    }
}