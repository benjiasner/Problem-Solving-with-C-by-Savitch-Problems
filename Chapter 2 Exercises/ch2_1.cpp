#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char runAgain = 'Y';
    while (runAgain == 'Y') {
        const double tonConversion = 35273.92;
        double ouncesWeightBox, tonsWeightBox;
        double numBoxesInTon;
        cout << "This program intakes the weight of a package of breakfast cereal in ounces and outputs its weight in metric tons.\n";
        cout << "Also, this program will tell you how many boxes of this cereal you would need to have one ton of cereal.\n";
        cout << "Input the weight of your cereal box in ounces: ";
        cin >> ouncesWeightBox;
        tonsWeightBox = ouncesWeightBox * tonConversion;
        cout << "Your cereal box weighs ";
        cout << tonsWeightBox;
        cout << " tons.\n";
        numBoxesInTon = ceil(tonConversion / ouncesWeightBox);
        cout << "The minimum number of cereal boxes weighing ";
        cout << ouncesWeightBox;
        cout << " ounces is ";
        cout << numBoxesInTon;
        cout << "\n";
        cout << "If you want to run this program again, type character 'Y'.  If not, type 'N': ";
        cin >> runAgain;
    }
    return 0;
}