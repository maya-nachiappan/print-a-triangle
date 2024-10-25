//
//  main.cpp
//  print a triangle
//
//  Created by maya nachiappan on 9/23/24.
//
// program to take user input for number of rows and print a triangle with *

#include <iostream>
int main()
{
    int row;
    std::cout << "enter the number of rows you would like your triangle to have:" << std::endl;
    std::cin >> row; // variable to store number of rows
    
    for (int x=0; x<=row; x++) // creates outer rows
    {
        for (int y=0; y<x; y++) // prints stars in increasing order of rows
        {
            std::cout <<"*";
        }
        std::cout << std::endl;
    }
    return 0;
}
