//Bibek Paudel
// 11/9/2023
//CS1428 Lab24
//Lab 10
//Description: this program will apply a curve to 5 grades

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
#include <iomanip>
using namespace std;

double getAverage(double g[], const int SIZE)
{
    double total = 0;

    for(int i = 0; i < SIZE; i++)
    {
        total += g[i];
    }

    return total/SIZE;
}

void applyCurve(double g[], const int SIZE, double &curve)
{
    for(int i = 0; i < SIZE; i++)
    {
        g[i] += curve;
    }
}


void findCurveInfo(double grades[], const int SIZE, double &highest, double &curve) 
{
    highest=0;
    for (int i=0; i<SIZE; i++)
    {
        if (grades[i] > highest)
        {
            highest=grades[i];
        }
    }
    curve = (100 - highest)/2;
}
// TODO: Complete the function definitions

void printData(double grades[], const int SIZE, double highest, double &average,double curve) 
{
    cout << "Grades after curve; " << endl;
    for (int i=0; i<SIZE; i++)
    {
        cout << grades[i] << endl;
    }
    
    cout << "Curve amount applied: " << curve << endl;
    
    cout<< "Average after curve: " << average << endl;
    
    findCurveInfo( grades,   SIZE,  highest,  curve);
    cout<< " Highest grade after curve: " << highest << endl;
    
    
}




int main()
{
    const int SIZE = 5;
    double highest;
    double average,
           curve,
           grades[SIZE];

    cout << "Enter " << SIZE << " grades: " << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cin >> grades[i];
    }

    findCurveInfo( grades,   SIZE,  highest,  curve);
    // TODO: Add function calls

    applyCurve( grades,   SIZE,  curve);

    average =  getAverage( grades,   SIZE);
    
    
    printData(grades,   SIZE,  highest,  average, curve) ;
    
    
    
    return 0;
}
