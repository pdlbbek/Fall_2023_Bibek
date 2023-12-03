//Bibek Paudel ctb127
// 10/18/2023

#include <iostream>
using namespace std;

// Function to print the welcome message
void printWelcomeMessage() {
    cout << "Welcome to my fabulous Jedi power level calculator!" << endl
         << "This program will take your age, weight, and" << endl
         << "midichlorean count and return your Jedi power level!"
         << endl << endl;
}

// Function to calculate Jedi level based on user input
double calculateJediLevel() {
    int age;
    int weight;
    int mcc;

    cout << "Please enter your age: ";
    cin >> age;
    cout << "Please enter your weight: ";
    cin >> weight;
    cout << "Please enter your midichlorean count: ";
    cin >> mcc;

    double jedi_level = static_cast<double>(mcc * age) / (weight * weight);
    return jedi_level;
}

int main() {
    double jedi_level;

    // Call the function to print the welcome message
    printWelcomeMessage();

    // Call the function to calculate Jedi level and assign the result to 
    //jedi_level
    jedi_level = calculateJediLevel();

    cout << "Your Jedi Level is: " << jedi_level;

    return 0;
}