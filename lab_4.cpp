// Bibek Paudel
//ctb127
//CS1428 Lab
//Lab 4
//Description: this program will caculate the number of calories
//    in a meal based on user input

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
using namespace std;

int main()
{
    char meal_choice;  //user's choice
    int servings,
        total_calories;

    // Display greeting:
    cout << "Welcome to the Calorie Count-ulator!\n";

    // Get user input:
    cout << "Enter your meal choice ([P]izza, [S]alad, [H]amburger)\n";
    cin >> meal_choice;
    
    switch (meal_choice)
        {
        case 'p':
        case 'P':
        case 's':
        case'S':
        case 'H':
        case 'h':
    cout << "Enter the amount of servings (1-9):\n";
    cin >> servings;
    
    switch (servings)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        
        // TODO: Use a switch statement to evaluate the user's meal choice
        switch (meal_choice)
        {
            case 'P':
            case 'p':
            total_calories = 500*servings ; 
            cout << "Total calories consumed " <<total_calories<< endl;
            break;
            
            case's':
            case'S':
             total_calories = 150*servings ;
            cout << "Total calories consumed " <<total_calories << endl;
            break;
            case 'H':
            case 'h':
             total_calories = 450*servings;
            cout << "Total calories consumed "<< total_calories << endl;
            break;
        }
        
        break;
    default:
    cout << "Invalid serving amount. Terminating the program. "<< endl;
    }
        
        
        
        // Handle error checking where appropriate

    break;
    default:
        cout << " Invalid meal choice. Terminating the program." << endl;
    break;
        }
    // Exit the program:
    return 0;
}