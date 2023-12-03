//Bibek Paudel ctb127
//Date:11/1/2023

// Lab 9 Pre-Lab Assignment

// Program takes 5 characters from a user (from console), stores them into an
// array, and then prints them to the screen in reverse order (on the same line).

// Add code to complete this program. You only need to add code where indicated
// by "ADD HERE".

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;  // size of array
    
    
    // ADD HERE - create an array of characters that will hold 5 integers.
    
    char usercharecter[SIZE];
    
    
    cout << "please enter 5 characters : " << endl;

    // For loop takes 5 characters from user and stores them in the array
    for (int i = 0 ; i < SIZE ; i++)
    {
        // ADD HERE - take user's input and store it in the array you created

   cin >> usercharecter[i] ;
    
    }
    
// ADD HERE - Write a for loop to print the array to the screen in reverse order

    cout << "Characters in reverse order: " << endl ;
    
    for ( int i = SIZE-1; i >= 0; i--)
    {
     cout << usercharecter[i];   
    }


    return 0;
}