#include "functions.h"



void Print(int userArray[], int userArraySize) {
	for (int i = 0; i < userArraySize; i++) {
		if (i % 15 == 0) { cout << "\n"; }
		cout << userArray[i] << "  |  ";
	}

	cout << "\n\n\n";
	return;
}





void ReadFile() {
	ifstream inFile("A1input.txt");

	// - - - - - - - - - - - - - - - - - -
	if (!inFile.good()) { cout << "Bad input file.\n"; return; }
	// - - - - - - - - - - - - - - - - - -

	int userArray[150];
	int x;
	int userArraySize = 0;

	while (inFile.good()) {
		inFile >> x;
		
		userArray[userArraySize] = x;
		userArraySize++;

	}

	inFile.close();

	x = userArraySize;
	while (x < 150) {
		userArray[x] = '\0';
		x++;
	}


	Print(userArray, userArraySize);
	
	//call next func
	// - - - - - - - - - - - - - - - - - -
	// - - - - - - - - - - - - - - - - - -

	x = CheckForInteger(userArray, userArraySize);
	if (x == -1) { cout << "Number was not in the array.\n"; }
	else { cout << "Index of number is: " << x << "\n"; }


	ModifyInteger(userArray, userArraySize);

}



//1) A function to check if a certain integer exists in the array if the number is present return the index where the number is present.
int CheckForInteger(int userArray[], int userArraySize) {
	string userInput;
	int intCheckingFor;
	bool good = false;


	// ask user what they are looking for:
	// - - - - - - - - - - - - - - - - - -
	do {
		try {
			cout << "What is the integer you are looking for?\n>> ";
			cin >> userInput;

			intCheckingFor = stoi(userInput); // if the input isn't an integer, this throws error
			good = true; // break while loop
		}
		catch (...) {
			cout << "----- Enter an integer. ------\n";
		}
	} while (!good); // while user input is not good


	// search:
	// - - - - - - - - - - - - - - - - - -
	for (int i = 0; i < userArraySize; i++) {
		if (userArray[i] == intCheckingFor) { return i; } // if the integer the user is looking for is found, then return its index.
	}
	return -1; // if it is not found, return -1;
}




//2) A function that can modify the value of an integer when called with the index of the integer in the array and return the new value and old value back to the user.
void ModifyInteger(int userArray[], int userArraySize) {
	string userInput;
	int index;
	int newInteger;
	int oldInteger;
	bool good = false;

	// ask the user for the index of the integer to change and the new integer to use 
	// - - - - - - - - - - - - - - - - - -

	do {
		try {
			cout << "What is the index of the integer you want to change?\n>> ";
			cin >> userInput;

			index = stoi(userInput); // if stoi fails, throws an error

			if (index > userArraySize) { throw "out of array error"; }

			good = true;
		}
		catch (...) {
			cout << "----- Enter an integer. ------\n";
		}

	} while (!good);


	oldInteger = userArray[index];


	good = false;
	do {
		try {
			cout << "What is the integer you want to change " << oldInteger << " to?\n>> ";
			cin >> userInput;

			newInteger = stoi(userInput); // if stoi fails, throws an error
			good = true;
		}
		catch (...) {
			cout << "----- Enter an integer. ------\n";
		}

	} while (!good);


	//return values
	// - - - - - - - - - - - - - - - - - -
	cout << "You have changed " + to_string(oldInteger) + " to be " + to_string(newInteger) + ".";
	userArray[index] = newInteger;
	
	
	Print(userArray, userArraySize);

	
	
	//call next func
	// - - - - - - - - - - - - - - - - - -
	// - - - - - - - - - - - - - - - - - -
	AddToEnd(userArray, userArraySize);

}








//3) A function that adds a new integer to the end of the array
void AddToEnd(int userArray[], int& userArraySize) {
	string userInput;
	int integerToAdd;
	bool good = false;

	// getting user input
	// - - - - - - - - - - - - - - - - - -
	do {
		try {
			cout << "Input the integer you want to add to the end of the list.\n>> ";
			cin >> userInput;

			integerToAdd = stoi(userInput);
			good = true;
		}
		catch (...) {
			cout << "----- Enter an integer. ------\n";
		}
	} while (!good);


	// setting the user's integer to the end
	// - - - - - - - - - - - - - - - - - -

	userArray[userArraySize] = integerToAdd;
	userArraySize++;

	Print(userArray, userArraySize);


	//call next func
	// - - - - - - - - - - - - - - - - - -
	// - - - - - - - - - - - - - - - - - -
	DeletingValue(userArray, userArraySize);
	
}





//4) A function which intakes an index of an array and replaces the value with either 0 or removes the integer altogether.
void DeletingValue(int userArray[], int userArraySize) {
	string userInput;
	int indexToDelete;
	bool good = false;

	// processing user inputs:
	// - - - - - - - - - - - - - - - - - -
	do {
		try {
			cout << "What is the index of the number you want to delete?\n>> ";
			cin >> userInput;

			indexToDelete = stoi(userInput);
			good = true;

			if (indexToDelete > userArraySize) { good = false; cout << "Out of array error.\n"; }

		}
		catch (...) {
			cout << "----- Enter an integer. ------\n";
		}
	} while (!good);


	// deleting value
	// - - - - - - - - - - - - - - - - - -
	userArray[indexToDelete] = 0;

	Print(userArray, userArraySize);
}
