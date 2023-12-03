//Bibek Paudel ctb127
//PreLab 11
//11/15/2023
//You may not have covered this material in your lecture sections.
//Complete as best as you are able.  Refer to the prelab reading for assistance.

//Add code where requested to complete the program.

#include <iostream>
#include <fstream>


using namespace std;

struct Snake
{
    string name;
    string breed;
    char gender;
    int age;
};

int main()
{
    // TODO - Create a Snake object named "snake1", and initialize its name to
    //        "Sally", gender to 'F', age to 5, and breed to "Boa".
    Snake snake1;
    snake1.name = "Sally";
    snake1.gender = 'F';
    snake1.age = 5;
    snake1.breed = "Boa";

        // TODO - Create a Snake object named "snake2".
    Snake snake2;

    // TODO - Prompt the user to enter the snake's name, age, gender, and breed,
    //        and assign them to the "snake2" object.
        //        Assume the snake name and breed are entered as a single word
        //        so that both will work with cin statements.
    cout << "Enter snake's name" << endl;
    cin >> snake2.name;
    cout << "Enter snake's age" << endl;
    cin >> snake2.age;
    cout << "Enter snake's gender" << endl;
    cin >> snake2.gender;
    cout << "Enter snake's breed" << endl;
    cin >> snake2.breed;
    
    // TODO - Print "snake1" and "snake2" objects to the console. E.g.
    //        "Name: Sally, Gender: F, Age: 5, Breed: Boa"
    cout << "Name: " << snake1.name<< ", Gender: " << snake1.gender 
    << ", Age: " << snake1.age << ", Breed: " << snake1.breed <<endl;
    cout << "Name: " << snake2.name <<", Gender: " << snake2.gender 
    << ", Age: " << snake2.age << ", Breed: " << snake2.breed <<endl;

 

    return 0;
}