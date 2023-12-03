// Name : Bibek Paudel
// Date: 10/12/2023
//CS1428 Lab
//Lab 6
//Description: this program will perform some operations on the digits of a number

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
using namespace std;

unsigned int factorial (int n)
{
  unsigned int result = 1;
  int i = 1;
  while (i <= n)
    {
      result *= i;
      i++;
    }
  return result;
}

int main ()
{
  char choice = 'y';
  do
    {
      unsigned int number, sum, even_sum, odd_sum;
      sum = 0;
      even_sum = 0;
      odd_sum = 0;
      unsigned int fact;
      if (choice != 'Y' && choice != 'y')
	{
	  cout << "Error: Invalid input." << endl;

	}
      else
	{
	  cout << "Enter a number (5 - 20): ";
	  cin >> number;

	  if (number >= 5 && number <= 20)
	    {
	      fact = factorial (number);

	      cout << number << "! = ";
	      int i = 1;
	      while (i <= number)
		{
		  cout << i;
		  if (i < number)
		    {
		      cout << " x ";
		    }
		  i++;
		}
	      cout << " = " << fact << endl;

	      while (fact > 0)
		{
		  int digit = fact % 10;
		  sum += digit;
		  if (digit % 2 == 0)
		    {
		      even_sum += digit;
		    }
		  else
		    {
		      odd_sum += digit;
		    }
		  fact /= 10;
		}

	      cout << "Sum of even digits of " << factorial (number) << " = "
		<< even_sum << endl;
	      cout << "Sum of odd digits of " << factorial (number) << " = "
		<< odd_sum << endl;
	    }
	  else
	    {
	      cout << "Error: Invalid input." << endl;
	    }
	}
      cout << "Do you want to continue (y/n)? ";
      cin >> choice;

    }
  while (choice != 'N' && choice != 'n');

  cout << "Have a great day!!!" << endl;

  return 0;
}