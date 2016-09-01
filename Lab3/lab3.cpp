#include <iostream>
#include <string>
using namespace std;

int main () 

{
   int wordAge            = 0;
   int wordWant           = 0;
   char cats = '/';

   string wordName;
   string wordGame;
   string wordWeapon;
   string wordAdjective;
   string wordTimePeriod;
   string wordMonster;
   string wordPlanet;
   string wordAdjective2;
   string wordAdjective3;
   string wordAdjective4;
   string wordLocation;
  
  
   cout << "Type input without spaces or with _ for spaces." << endl;
   
   cout << "Enter your name:" << endl;
   cin >> wordName; 
  
   cout << "Enter half your age: " << endl;
   cin >> wordAge;

   cout << "Enter a kind of game: " << endl;
   cin  >> wordGame;
   
    cout << "Enter a time period: "  << endl;
   cin  >> wordTimePeriod;
   
   cout << "Enter a kind of weapon: " << endl;
   cin  >> wordWeapon;

   cout << "Enter an adjective: "   << endl;
   cin  >> wordAdjective;
   
   cout << "Enter an adjective2: "   << endl;
   cin  >> wordAdjective2;
   
   cout << "Enter an adjective3: "   << endl;
   cin >> wordAdjective3;
   
   cout << "Enter an adjective4:" << endl;
   cin >> wordAdjective4;

   cout << "Enter a monster: "  << endl;
   cin >> wordMonster;
   
   cout << "Enter amount of money: " << endl;
   cin >> wordWant;
   
   cout << "Enter a location: " << endl;
   cin >> wordLocation;
   

    

   // The story
   cout << endl;
   cout << "My name is " << wordName << "." << endl;
   cout << "I am " << wordAge * 2 << " years old " << "in " << wordGame << " during the " << wordTimePeriod << "." << endl;
   cout << "My " << wordWeapon << " is " << wordAdjective << " and " << wordAdjective2 << "." << endl;
   cout << "I will slay some " << wordAdjective3 << " " << wordMonster << " to acquire " << wordWant * 1.75 << " dollars " << "so I can live in " << wordAdjective4 << wordLocation << "." << endl;
  
   
   cout << cats << cats << cats << cats << cats << cats << cats << cats << cats << cats << cats << cats << endl;

   return 0;
}

