// Bibek Paudel
// ctb127
// date-9/6/2023
// Pre-Lab 1 Assignment

#include <iostream>

using namespace std;

int main()
{
    // 1.
    // There are several errors with the below code
    // Fix the syntax and logical errors.

    // The Program should take two integers from the user and assign them to z and t.(the x and y are changed to z and t)
    // The program should then print z to the power of 4 and t + 36

    int z;
    int t;

    cout << "Enter the value for z: ";
    cin >> z;

    cout << "Enter the value for t: ";
    cin >> t;

    int z_power_4 = z * z * z * z;
    t += 36;

    cout << "z to the power of 4 = " << z_power_4 << endl;
    cout << "t + 36 = " << t << endl;

    // 2.
    // Write code that takes the number of pounds the user
    // can lift (use cin), divides that number by 2.20462, and then
    // prints it to the screen. This will convert pounds to kg.
    // (200 pounds is equal to 90.7186 kilograms)

    cout << "Enter the number of pounds you can lift: ";
    double pounds;
    cin >> pounds;

    double kilograms = pounds / 2.20462;

    cout << "You can lift " << kilograms << " kilograms." << endl;

    return 0;
}