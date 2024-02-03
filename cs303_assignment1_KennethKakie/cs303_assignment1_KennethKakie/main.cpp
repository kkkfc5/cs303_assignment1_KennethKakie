#include "functions.h"

int main(){



	ReadFile();
	/*


	int userArray[100];
	int userArraySize = 0;
	


	// FILLING THE ARRAY:
	// //prompt user for values for the array [remember to increment each time a value is added]
	// =========================================================================================
	string userInp;
	int temp;
	bool good = false;

	// - - - - - - - - - - - 

	good = false;
	

	if (toupper(userInp[0]) != 'Q') { // if the user hasn't inputted that they would like to quit:
		do {
			cout << "What integer would you like to add to the array?   [Q to Quit]  \n>> ";
			cin >> userInp;
			try {
				temp = stoi(userInp); // if stoi fails, it will break and throw exception

				userArray[userArraySize] = temp; // set the array to be the value the user entered
				userArraySize++; // increment the array's size
			}
			catch (...) { // when the user inputs a non-integer:
				if (toupper(userInp[0]) == 'Q') { good = true; break; } // if user wants to quit, break function
				cout << "----- Enter an integer. ------\n"; // otherwise print the error message
			}
		} while (!good); // while the user input is not good-- i.e. while the user didn't input a q to quit
	}
	// =========================================================================================




	cout << "\n\n\n\nQ1) Part 1\n\n"; ////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Its index is: " << CheckForInteger(userArray, userArraySize);
	
	cout << "\n\n\n\nQ1) Part 2\n\n"; ////////////////////////////////////////////////////////////////////////////////////////////////
	cout << ModifyInteger(userArray, userArraySize);

	cout << "\n\n\n\nQ1) Part 3\n\n"; ////////////////////////////////////////////////////////////////////////////////////////////////

		
	
	for (int i = 0; i < userArraySize; i++) {
		cout << "\n[]][  " << userArray[i];
	}

	*/

	//
	return 0;
}














// PERHAPS HAVE A SECONDARY OUTPUT FILE, AND WHEN PRINTING YOU READ FROM THAT