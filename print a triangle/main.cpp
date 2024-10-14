//
//  main.cpp
//  print a triangle
//
//  Created by maya nachiappan on 9/23/24.
//
// program to take user input for number of rows and print a triangle with *

#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "enter the number of rows you would like your triangle to have:" << endl;
    cin >> row; // variable to store number of rows
    
    for (int x=0; x<=row; x++) // creates outer rows
    {
        for (int y=0; y<x; y++) // prints stars in increasing order of rows
        {
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}
