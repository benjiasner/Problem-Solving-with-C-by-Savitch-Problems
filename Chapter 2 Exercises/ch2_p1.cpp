#include <iostream>
using namespace std;

int main() {

    const double gramsSweetKillMouse = 5.0;
    const double massMouse = 35.0;
    const double gramsPerPound = 454.0;
    const double gramsSweetSoda = 350.0;
    const double dietSodaPercentSweetener = 0.001;

    double targetWeight;
    double targetWeightGrams;
    double gramsKillPerson;
    double totalSoda;

    //To ensure the safety of the user, the program requests the weight at which the dieter
    //will stop dieting, rather than the dieter’s current weight.
    cout << "This program tells you how much diet soda you can consume before dying.  Please enter your target weight after dieting, in pounds: ";
    cin >> targetWeight;

    targetWeightGrams = gramsPerPound * targetWeight;
    gramsKillPerson = (gramsSweetKillMouse / massMouse) * targetWeightGrams;

    totalSoda = dietSodaPercentSweetener * gramsKillPerson * gramsSweetSoda;

    cout << "You should drink no more than ";
    cout << totalSoda;
    cout << " grams of soda per day to continue to live.";


    return 0;
}