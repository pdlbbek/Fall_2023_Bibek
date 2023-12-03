//Bibek Paudel
//ctb127
//CS.1428.L24
//9/13/2023


// PreLab 2 Assignment

// Write a program that copies the data in the

// prelab input file to an output file "88_mph"

// so that it is formatted the same in both files.

// Additionally add 50 to the year when you rewrite

// it to the output file to help Marty Mcfly get back to

// his proper time.



#include <iostream>

#include <fstream>

using namespace std;

int main() {

    // ADD HERE declare variables
    string firstname;
    string lastname;
    int year;
    // declare input file stream variable and open file

    ifstream fin;

    fin.open("prelab_input.txt");

    // Test to see if file correctly opened. If statements will

    // be learned in the future. For now, don't worry about

    // understanding this.

    if (!fin) {

      cout << "ERROR - File failed to open. make sure that " << "the input file and this file are in the"

        << "same directory" << endl;

      return -1;

      // Return statement will terminate the program. We do not want

      // to continue if we do not have a valid input file.

    }

    // declare output file stream varaible and open file

    ofstream fout;

    fout.open("88_mph.txt");

    // ADD HERE write your code here

    fin >> firstname>>lastname>> year;
    fout<< firstname<< " "<<lastname<<" "<< year+50;
 

    // closing files

    fin.close();

    fout.close();

    return 0;

}