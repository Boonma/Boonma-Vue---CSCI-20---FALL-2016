// Welcome to Boonma's guessing game.

/* Rules: The Computer will attack you for a certain amount of damage between 1-100. Choose the correct number within 10 tries or
		game over. If chosen incorrectly, the computer will either raise his hands or lower them indicating if the number is higher
		or lower. Every correct guess gives you an artifical apple. */
		
// Congratulation on those apples!


#include <iostream>
using namespace std;

int main() {
	int numComputer    = 75;
	int guess          =  0;
	int resets         =  0;

	cout << "Pick a number between 1 through 100:";
	cin >> guess;
    cout << numComputer << " is the answer." << endl;
    

	   
	 return 0;
}

 