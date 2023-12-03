//Bibek Paudel ctb127
//10/5/2023
//CS1428 Lab24
//Lab 5
//Description: this program will print a numerical sequence with user-input length

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
using namespace std;

int main() {

    int length, hidden_multiple, modulo;

    // Prompt the user for the length
    // and the multiple they want hidden:
    cout << "Sequence Generator 2000!" << endl
         << "Enter the length: ";
    cin >> length;
    cout << "Multiples of what number should be hidden: ";
    cin >> hidden_multiple;
    cout << endl;

    // TODO: Validate input, then print the sequence:
    
    if (length>0 && hidden_multiple>0) 
    {
        
        for(int i = 1; i <= length; i++)
        {
            
            modulo = i % hidden_multiple ;
        
            if (modulo != 0 )
            {
            cout << "|" << i;    
            }
            
            else
            cout << "|#"; 
        }

        cout << "|";
        
    }
    else 
    cout << "ERROR: number and multiples must be larger than 0.";

    return 0;
}