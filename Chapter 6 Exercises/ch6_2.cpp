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

    fin.open("file2.dat");
    if (fin.fail( )) {
        cout << "Input file opening failed.\n";
        exit(1);
    }
    char next;
    int lineCounter = 0;
    string line;

    while( getline(fin, line) ) {
        lineCounter++;
    }

    //while (! fin.eof( )){
     //   if (fin >> next){
       //     cout << fin;
         //   cout << next;
           // if ( (next == '\n') || (next == '\r') ) {
            //    lineCounter++;
            //}
        //}
    //}

    cout << "The total number of lines in this file is ";
    cout << lineCounter;
    cout << ".";

    cout << "\n";
    fin.close( );
    cout << "Done reading file. \n";

    return 0;
}