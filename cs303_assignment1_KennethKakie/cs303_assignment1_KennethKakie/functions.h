#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// - - - - - General - - - - - 
void Print(int userArray[], int userArraySize);
void ReadFile();


// - - - - - Assignment - - - - - 

//1) A function to check if a certain integer exists in the array if the number is present return the index where the number is present.
int CheckForInteger(int userArray[], int userArraySize);


//2) A function that can modify the value of an integer when called with the index of the integer in the array and return the new value and old value back to the user.
void ModifyInteger(int userArray[], int userArraySize);


//3) A function that adds a new integer to the end of the array
void AddToEnd(int userArray[], int &userArraySize);


//4) A function which intakes an index of an array and replaces the value with either 0 or removes the integer altogether.
void DeletingValue(int userArray[], int userArraySize);