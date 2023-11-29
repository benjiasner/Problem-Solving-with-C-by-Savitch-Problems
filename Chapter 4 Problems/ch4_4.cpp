#include <iostream>

using namespace std;

double calcMarkAsPercentage(int correct, int incorrect, int total){
    return ( ( (1.0 * correct) - (0.25 * incorrect) ) / (1.0 * total) )*100;
}

int main(){

    int correct, incorrect, total;

    cout << "This program determines your score if you get 1 point per question right and lose 0.25 points for each incorrect answer." << endl;
    cout << "Please input your total number of correct answers: ";
    cin >> correct;
    cout << endl << "Now input your total number of INCORRECT answers: ";
    cin >> incorrect;
    cout << endl << "And finally the total number of questions on the test (including those you didn't answer): ";
    cin >> total;

    cout << endl << "Your final score as a percentage is " << calcMarkAsPercentage(correct, incorrect, total);

    return 0;
}