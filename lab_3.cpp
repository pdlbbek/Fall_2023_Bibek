// Bibek Paudel ctb127
// 9/21/2023
//CS1428 Lab24
//Lab 3
//Description: this program will allow the user to play a game of Red,
//  Green, Blue Squirrels against a randomized computer opponent

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int user_num;  //user's choice
    int comp_num;  //computer's choice

    // Generate the computer's choice randomly:
    srand(time(NULL));
    comp_num = rand() % 3 + 1;
        //cout << comp_num<< endl;
    // Get the user's choice:
    cout << "Natural Selection Game" << endl
         << " 1. Red" << endl
         << " 2. Blue" << endl
         << " 3. Green" << endl
         << "Enter a number : ";
    cin >> user_num;
    cout << endl;


    // TODO: Determine if the user wins, loses, or ties (or enters invalid input):
        if (user_num==comp_num ) {
            if (user_num==1){
                cout << "You both choose Red! It's a tie." << endl;
            }
            else if (user_num==2){
                cout << "You both choose blue! It's a tie." << endl;
            }
            else {
                cout << "You both choose green! It's a tie." << endl;    
            }
        }
        
        else if ((user_num==1 && comp_num==2) || (user_num==1 && comp_num==3)){
            if (comp_num==2){
            cout << "Blue beats red! You loose.";
                
            }
            else {
            cout <<"Red beats green! You won.";
                
            }
        }
        
        else if ((user_num==2 && comp_num==1) || (user_num==2 && comp_num==3) ){
            if (comp_num==1){
                cout<< "Blue beats red! You win."
            ;
            }
           else {
            cout << "Green beats blue! You loose.";}
        }
        else if ((user_num==3 && comp_num==1) || (user_num==3 && comp_num==2) ){
            if (comp_num==1){
                cout << "Red beats green. You loose.";
            }
            else {
                cout<< "Green beats blue! You win.";
            }
        }
        else {
            cout <<" Invalid Input. Terminating Program.";
        }
    
    // Exit the program:
    return 0;
}