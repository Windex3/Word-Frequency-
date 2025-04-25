#include "WordFrequency.h"

#include <iostream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

//Prototypes
void menu(WordFrequency& object);

int main() { 
  WordFrequency object;  //Create object of WordFrequency class
  object.countWords("CS210_Project_Three_Input_File");  //Call countWords function from WordFrequency class
  object.writeToFile("frequency.dat");  //Call writeToFile function from WordFrequency class
  menu(object);  //Call menu function
  
return 0; 
}

//Menu function
void menu(WordFrequency& object) {
  bool loop = true;
  int choice;

  while (loop) {
    //Displays menu and gets user input
    cout << "Main Menu" << endl;
    cout << "1. Look For the Frequency of an Item." << endl;
    cout << "2. Display Items and their Frequency." << endl;
    cout << "3. Display a Histogram." << endl;
    cout << "4. Exit." << endl;
    cin >> choice;
  
    switch (choice) {
      //Calls functions from class based on user input
      case 1:
        object.lookForFrequency();
        cout << endl;
        break;
      case 2:
        object.displayFrequency();
        cout << endl;
        break;
      case 3:
        object.displayHistogram();
        cout << endl;
        break;
      case 4:
        loop = false;  //Ends loop and exits program
        break;
      default:
        cout << "Invalid choice. Please try again." << endl;
        break;   
    }     
  }
}
