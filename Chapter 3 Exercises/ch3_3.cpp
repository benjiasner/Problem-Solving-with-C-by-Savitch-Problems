#include <iostream>
using namespace std;


int main() {

    int birthDay;
    int birthMonth;
    string horoscope;
    char charGo = 'y';

    do {

        cout << "This program tells you your horoscope based on your birth day and month.  Please enter your birth month (as an integer): ";
        cin >> birthMonth;
        cout << "\n";
        cout << "Now enter the day of the month you were born: ";
        cin >> birthDay;
        
        // multiway branch to determine horoscope
        if ( ( (birthMonth == 3) && (birthDay >= 21) ) || ( (birthMonth == 4) && (birthDay <= 19) ) ) {
            horoscope = "Aries";
        } else if ( ( (birthMonth == 4) && (birthDay >= 20) ) || ( (birthMonth == 5) && (birthDay <= 20) ) ) {
            horoscope = "Taurus";
        } else if ( ( (birthMonth == 5) && (birthDay >= 21) ) || ( (birthMonth == 6) && (birthDay <= 21) ) ) {
            horoscope = "Gemini";
        } else if ( ( (birthMonth == 6) && (birthDay >= 22) ) || ( (birthMonth == 7) && (birthDay <= 22) ) ) {
            horoscope = "Cancer";
        } else if ( ( (birthMonth == 7) && (birthDay >= 23) ) || ( (birthMonth == 8) && (birthDay <= 22) ) ) {
            horoscope = "Leo";
        } else if ( ( (birthMonth == 8) && (birthDay >= 23) ) || ( (birthMonth == 9) && (birthDay <= 22) ) ) {
            horoscope = "Virgo";
        } else if ( ( (birthMonth == 9) && (birthDay >= 23) ) || ( (birthMonth == 10) && (birthDay <= 21) ) ) {
            horoscope = "Libra";
        } else if ( ( (birthMonth == 10) && (birthDay >= 22) ) || ( (birthMonth == 11) && (birthDay <= 21) ) ) {
            horoscope = "Scorpio";
        } else if ( ( (birthMonth == 11) && (birthDay >= 22) ) || ( (birthMonth == 12) && (birthDay <= 21) ) ) {
            horoscope = "Sagittarius";
        } else if ( ( (birthMonth == 12) && (birthDay >= 22) ) || ( (birthMonth == 1) && (birthDay <= 19) ) ) {
            horoscope = "Capricorn";
        } else if ( ( (birthMonth == 1) && (birthDay >= 20) ) || ( (birthMonth == 2) && (birthDay <= 18) ) ) {
            horoscope = "Aquarius";
        } else if ( ( (birthMonth == 2) && (birthDay >= 19) ) || ( (birthMonth == 3) && (birthDay <= 20) ) ) {
            horoscope = "Pisces";
        } else {
            horoscope = "not findable, please try again and check your input month and day.";
        }
        
        cout << "Your horoscope is ";
        cout << horoscope;
        cout << ".";

        charGo = 'n';

        cout << " Please enter 'Y' if you would like to find the horoscope for another month and day: ";
        cin >> charGo;

    } while ((charGo == 'Y') || (charGo == 'y'));


    return 0;
}