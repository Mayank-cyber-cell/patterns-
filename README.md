Overview
This C program prompts the user for a number n and then prints a pattern of stars (*) based on the input size. The pattern consists of a square grid of size n x n where:

The middle row is completely filled with stars.
The middle column of each row contains a star if it's not the middle row.
Purpose
The primary purpose of this program is to demonstrate how to generate a specific pattern using nested loops in C. The pattern features:

A horizontal line of stars in the middle row.
A vertical line of stars in the middle column, excluding the middle row.
Functionality
User Input:

The program asks the user to input an integer n which specifies the size of the grid.
Pattern Generation:

It prints a square grid of size n x n.
The middle row and middle column of the grid are filled with stars (*), while all other positions are empty spaces.
Output:

The pattern is printed to the console.
Usage
Compile the Program:

Use a C compiler like gcc to compile the program.
Notes
The program assumes n is a positive integer.
