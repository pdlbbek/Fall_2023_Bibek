//Bibek Paudel
//9/7/2023
//CS1428 Lab
//Lab 1
//Description: this program will calculate a user's bmi

#include <iostream>
using namespace std;

int main() {

    string name;
    // TODO: Declare the rest of the variables (weight, height, bmi)
    float weight;
    float height;
    float bmi;

    // Prompt the user for name and store:
    cout << "What is your name?" << endl;
    cin >> name;

    // TODO: Prompt for and store the user's weight and height:
    cout << "What is your weight(lbs.)?" << endl;
    cin >> weight;
    cout << "What is your height(inches) [1 foot = 12 inches]?" << endl;
    cin >> height;
    // TODO: Calculate and assign the user's BMI to the appropriate variable:
    bmi= (weight/(height*height)*703);
    // TODO: Display the user's BMI to the console:
    cout<< name <<"'s BMI is " << bmi; // Exit the program:
    return 0;
}

