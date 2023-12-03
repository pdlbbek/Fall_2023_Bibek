//Bibek Paudel ctb127
//11/2/2023
//CS1428 Lab24
//Lab 9
//Description: this program will track game preferences for the user
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int SIZE = 6; //number of games
    const string GAMES[] = {"Legend of Zelda",
                        "Super Mario Bros.",
                        "Portal",
                        "Final Fantasy XII",
                        "Pac-Man",
                        "Tetris"};

    double ratings[SIZE];
    double total = 0,
           average;
    int lowest_index = 0;

    //Prompt the user for game ratings
    cout << "Please enter a rating for the following games:" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << GAMES[i] << "  : ";
        // TODO: Take user input for game rating HERE
        cin >> ratings[i];
    }

    //TODO: Determine the average rating

    for ( int i = 0; i < SIZE; i++)
    {
    total += ratings[i];
    }

    average = total/SIZE;

    //TODO: Determine the index of the game with the Lowest rating

  
        for (int j = 0; j < SIZE; j++)
        {
            if (ratings[j] < ratings[lowest_index])
            {
                lowest_index = j;
            }
        }
    

    cout << fixed << setprecision(1)
         << "Average rating : " << average << endl
         << "Lowest rating : " << ratings[lowest_index] << " rated "
         << GAMES[lowest_index] << endl;

    return 0;
}
