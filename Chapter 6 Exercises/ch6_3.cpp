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

    fin.open("file5.dat");
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
    double middleVal;
    double middleValUpper;
    double middleValLower;
    double median;
    string currentChar;

    while (! fin.eof( )){
        if (fin >> next){
            fileNumbers[i] = next;
            i++;
        }
    }


    if (i % 2 != 0) {
        middleVal = i/2;
        median = fileNumbers[int(middleVal)];
    } else {
        middleValUpper = i/2 + 0.5;
        middleValLower = i/2 - 0.5;
        median = ( fileNumbers[int(middleValUpper)] + fileNumbers[int(middleValLower)] ) / 2.0;
    }

    cout << "The median of the numbers in your file is ";
    cout << median;
    cout << ".";

    cout << "\n";
    fin.close( );
    cout << "Done reading file./n";

    return 0;
}