//Bibek Paudel ctb127
//10/26/2023
//CS1428 Lab
//Lab 8
//Description: this program will perform some computations on a set of numbers

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>

using namespace std;

// Function Prototypes:
bool isValidnum(int);
bool isValidop(char);
int result(int, char);

int main()
{
    int n, sum;
    char op, cont;

    do{

        cout << "Enter a number [1 - 100]:";
        cin >> n;
        while(!isValidnum(n)) // Function Call
        {
            cout << "ERROR: Number must be between 1 and 100." << endl
                 << "Enter a valid number [1- 100]: ";
            cin >> n;
        }
        cout << "Enter an operand [+, -, *]:";
        cin >> op;
        while(!isValidop(op)) // Function Call
        {
            cout << "ERROR: Operand must be either +, - or *" << endl
                 << "Enter a valid operand [+, -, *]: ";
            cin >> op;
        }
        sum = result(n, op); // Function Call
        switch(op){
            case '+':
                cout << "The sum";
                break;
            case '-':
                cout << "The difference";
                break;
            
            case '*':
                cout << "The product";
                break;
        }
        cout << " of numbers from 1 to " << n << " is " << sum << endl;



        cout << "\nWould you like to continue? (Y or N): ";
        cin >> cont;

    }while(cont == 'Y' || cont == 'y');

    return 0;
}

// TODO: Add function definitions here

    bool isValidnum(int num)
    {

        if ((num > 1) && ( num <100 ))
      
        
       return true ;
       else
       return false;
    }
    
    bool isValidop(char operatortype)
    {
     if (operatortype == '+')
     return true;
     else if (operatortype == '-')
     return true;
     else if (operatortype == '*')
     return true;
     else
     return false;
    }
    
    
    int result(int num, char operator1)
    {             int value;
    
     if (operator1 =='+')
     {
         value=0;
         for (int i = 1; i<=num ; i++)
         {
                value +=i;
         }
     }
     
     else if (operator1 =='-')
     {
         value=0;
        for (int i=1; i<=num ; i++)
         {
                value -=i;
         }
         
     }
     
     else if (operator1 =='*')
     {
           value=1;
         for ( int i=1; i<=num; i++)
         {
           value *=i;
         }
     }
     return value;
    }


