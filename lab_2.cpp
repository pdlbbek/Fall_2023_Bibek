//Bibek Paudel
//9/14/2023
//CS1428 Lab
//Lab 2
//Description: this program will calculate the average number
//  of iphones sold by Apple and save the values to a
//  file

#include <iostream>
#include <iomanip> // library for setw() and other i/o manipulators
#include <fstream> // library for file input and output
using namespace std;

int main() {

    string sale_period, version;
    double year1, year2, year3, year4;
    double average;

    // Declare input file stream variable and open the input file:
    ifstream fin;
    fin.open("Apple_iphone_sales_data.txt");

    // TODO: Declare output file stream variable and open the output file:
    ofstream fout;
    fout.open("averages.txt");
    

    // Error check to ensure the input file opened:
    if (!fin) {
        cout << "Could not open file. Terminating program." << endl;
        return -1;
    }

    // Write the column headers to the output file:
    fout << left;
    fout << setw(10) << "Sale Period" << setw(13) << "Version" << "Average" << endl;

    // TODO: Read data from input file, perform calculation,
    //    and write data to output file (x3):
    fin>> sale_period>> version>>year1>> year2>> year3;
    average=(year1+year2+year3)/3;
    fout << setw(10) << sale_period<< setw(13) << version << fixed<<setprecision(3) << average << endl;

    fin>> sale_period>> version>>year1>> year2>> year3;
    average=(year1+year2+year3)/3;
    fout << setw(10) << sale_period<< setw(13) << version <<  average << endl;
    
    fin>> sale_period>> version>>year1>> year2>> year3;
    average=(year1+year2+year3)/3;
    fout << setw(10) << sale_period<< setw(13) << version <<  average << endl;
    
    fin>> sale_period>> version>>year1>> year2>> year3;
    average=(year1+year2+year3)/3;
    fout << setw(10) << sale_period<< setw(13) << version <<  average << endl;

    cout << "Data written to averages.txt" << endl;

    // Close the input and output files:
    fout.close();
    fin.close();

    // Exit the program:
    return 0;
}