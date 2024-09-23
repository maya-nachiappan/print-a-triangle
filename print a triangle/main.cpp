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
    cin >> row;
    for (int x=0; x<=row; x++)
    {
        for (int y=0; y<x; y++)
        {
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}
