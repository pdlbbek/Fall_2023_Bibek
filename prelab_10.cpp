//Bibek Paudel ctb127
//11/09/2023
// Lab 10 Pre-Lab Assignment

// Write a function that multiplies each element in the array "myArray"
// by the variable "multiplyMe".

#include <iostream>

using namespace std;

    // Function prototype
    void multiplyArrayElements(int array[], int size, int multiplier);
    
    int main()
    {
        const int SIZE = 10;
        int myArray[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
        int multiplyMe = 5;
    
        // Call the function to multiply the array elements
        multiplyArrayElements(myArray, SIZE, multiplyMe);
    
        // Print the modified array
        for (int i = 0; i < SIZE; i++)
        {
            cout << myArray[i] << " ";
        }
        cout << endl;
    
        return 0;
    }

    // Function definition to multiply array elements
    void multiplyArrayElements(int array[], int size, int multiplier)
    {
        for (int i = 0; i < size; i++)
        {
            array[i] *= multiplier;
        }
    }





