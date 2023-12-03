//Bibek Paudel
//11/16/2023
//CS1428 Lab24
//Lab 11
//Description: this program will keep track of a dealership inventory
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########
#include <iostream>
#include <iomanip>
using namespace std;
//TODO: Create your struct

struct CarDealership{
 string make;
 int year;
 int quantity;
 
};

int main()
{
const int SIZE = 3;
CarDealership car[SIZE];
int total = 0,
HighestInventory = 0,
LowestInventory = 0;
for(int i = 0; i < SIZE; i++)
{
//TODO: Prompt/read car information
//adds inventory of each make to the total inventory
cout<< "Record #"<<i+1<<endl;
cout << "Enter make: "<< endl;

getline(cin, car[i].make);

cout << "Enter year: " << endl;
cin >> car[i].year;
cin.ignore();

cout<< "Enter quantity: " << endl;
cin >> car[i].quantity;
cin.ignore();

total += car[i].quantity;

//TODO: Find the make with the highest inventory
//TODO: Find the make with the lowest inventory

if (car[i].quantity>car[HighestInventory].quantity)
{
    HighestInventory=i;
}

if (car[i].quantity<car[LowestInventory].quantity)
{
    LowestInventory=i;
}

cout << endl << endl;
}
//TODO: output the total inventory, the make with the highest inventory,
//and the make with the lowest inventory.

cout << "Total Inventory: "<< total<< endl;
cout<< "Highest Inventory: "<< car[HighestInventory].make<< endl;
cout << "LowestInventory: "<< car[LowestInventory].make << endl;


return 0;
}