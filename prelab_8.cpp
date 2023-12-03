//Bibek Paudel ctb127
//Oct 19, 2023
//CS1428 Lab
//Pre Lab 8
#include <iostream>
using namespace std;

// Function prototypes
double getSide();
double calcVolume(double side);
void printResults(double volume);

int main()
{
    double side, volume;

    // Call 'getSide' function and assign the returned value to 'side'.
    side = getSide();

    // Calculate the volume of the pyramid using 'calcVolume'.
    volume = calcVolume(side);

    // Call 'printResults' function to display the results.
    printResults(volume);

    return 0;
}

// Function to get the length of a side of the pyramid from the user
double getSide()
{
    double side;
    cout << "Enter the length of a side of the pyramid: ";
    cin >> side;
    return side;
}

// Function to calculate the volume of the pyramid
double calcVolume(double side)
{
    return (1.0 / 3.0) * side * side * side;
}

// Function to print the results to the console
void printResults(double volume)
{
    cout << "The volume of your pyramid is " << volume << " units cubed." << endl;
}