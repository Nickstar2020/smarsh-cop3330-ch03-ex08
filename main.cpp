/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nicholas Smarsh
 */

//include library
#include "std_lib_facilities (1).h"

int main()
{
    //initialize variable
    int number;
    //ask for int
    cout<< "Enter an integer\n";
    cin >> number;

    //if the number is modulo by 2 and equals 0, then its even
    if(number % 2 == 0) 
    {
      cout << number << " is an even number\n";
    }
    //otherwise, its odd
    else 
    {
      cout << number << " is an odd number\n";
    }
    //end program
    return 0;
}