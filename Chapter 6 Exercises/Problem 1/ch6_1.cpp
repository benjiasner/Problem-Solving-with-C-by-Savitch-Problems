#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//write a program that will read a file of 
// numbers of type int and output the frequency of each number in the file
// - numbers are of type int
// - file contains only whole numbers, 
// positive and negative, separated by spaces, tabs or line breaks

int main() {

    // first define the variables we want
    // then read the file
    ifstream fin;

    cout << "Begin editing files.\n";

    fin.open("file1.dat");
    if (fin.fail( )) {
        cout << "Input file opening failed.\n";
        exit(1);
    }

    int next;
    int i;
    int fileNumbers[100];
    int numFreq[100][2];
    int tempInt;
    int add;
    string currentChar;

    while (! fin.eof( )){
        if (fin >> next){
            fileNumbers[i] = next;
            i++;
        }
    }

    // 

    for (int j = 0; j < i; j++){
        tempInt = fileNumbers[j];
        bool isInYet = false;
        for (int k = 0; k < i; k++) {
            if (tempInt == numFreq[k][0]) {
                isInYet = true;
            }
        }

        if (!isInYet) {
            numFreq[j][0] = tempInt;
            numFreq[j][1]++;
        } else {
            for (int k = 0; k < i; k++) {
                if (tempInt == numFreq[k][0]) {
                    numFreq[k][1]++;
                }
            }
        }

    }

    cout << " Numbers in file: ";

    for (int j = 0; j < i; j++){
        cout << fileNumbers[j];
        cout << " ";
    }

    cout << "\n";
    cout << "Frequency of each number: ";

    for (int j = 0; j < i; j++){
        
        if (numFreq[j][0] != 0) {

            cout << "The number ";
            cout << numFreq[j][0];
            cout << " occurs ";
            cout << numFreq[j][1];
            cout << " times in this file. ";
            cout << "\n";

        }
    }


    cout << "\n";
    fin.close( );
    cout << "Done reading file./n";

    return 0;
}