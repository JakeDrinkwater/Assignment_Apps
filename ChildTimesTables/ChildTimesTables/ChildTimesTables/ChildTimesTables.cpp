// ChildTimesTables.cpp : Defines the entry point for the console application.
//Run me without debugging Ctrl + F5

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
  //identifiers - constants
  const int MINTABLE = 0;
  const int MAXTABLE = 12;
	
  const int MINROWS = 1;
  const int MAXROWS = 12;
	
  //identifiers - variables
  int table;
  int rows;
  int product;
  int counter;
  char again;
	
  //main loop
  do
  {
    cout << "\n\nChild's times tables";

    //validation loop
    do
    {
      cout << "Please enter table required ("<< MINTABLE << "-" << MAXTABLE << "):" << endl;
      cin >> table;
      if (table < MINTABLE || table > MAXTABLE) 
      {
	cout << "Sorry, tables must be between "<< MINTABLE <<" and "<< MAXTABLE << endl;
      }
    } while (table < MINTABLE || table > MAXTABLE);
	
    //validation loop
    do
    {
      cout << "Please enter rows required ("<<MINROWS<<"-" << MAXROWS <<"):" << endl;
      cin >> rows;
      if (rows < MINROWS || rows > MAXROWS) 
      {
	cout << "Sorry, rows must be between "<< MINROWS <<" and "<< MAXROWS << endl;
      }
    } while (rows < MINROWS || rows > MAXROWS);
	
    //display the required tables
    cout << "Child's timetables: " << rows << " row(s) of the " << table << " times table\n";
		
    for (counter = MINROWS; counter <= rows; counter++) 
    {
      product = table * counter;
      cout << counter << " x " << table << " = " << product << endl;
    }
    cout << "\nMore tables (y/n)? ";
    cin.get(again);

  } while (again == 'y' || again == 'Y');  
	
  return 0;
}


