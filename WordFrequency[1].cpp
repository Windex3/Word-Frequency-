#include "WordFrequency.h"
#include <iostream>
#include <fstream>

using namespace std;

//Constructor
void WordFrequency::countWords(const string& filename) {
  ifstream fin(filename);
  string word;

  //Checks if file opens correctly
  if (!fin) {
    cout << "Error opening file" << endl;
  return;
  }

  //Counts words in file
  while (fin >> word) {
    wordCount[word]++;
  }

  //Closes file
  fin.close();
}

//Writes items and their frequency to a file
void WordFrequency::writeToFile(const string& filename) {
  ofstream fout(filename);

  //Checks if file opens correctly
  if (!fout) {
    cout << "Error opening file" << endl;
    return;
  }

  //Writes items and their frequency to file using the map
  for (const auto& pair : wordCount) {
    fout << pair.first << " " << pair.second << endl;
  }

  //Closes file
  fout.close();
}

//Looks for frequency of an item based on user input
void WordFrequency::lookForFrequency() {
  string searchWord;
  cout << "Enter the word to search for: ";
  cin >> searchWord;

  //Checks if word is in map and displays frequency
  if (wordCount.find(searchWord) != wordCount.end()) {
    cout << wordCount.at(searchWord) << endl;
  }
  //Displays error message if word is not found
  else {
    cout << "Word not found." << endl;
  }
}

//Displays items and their frequency
void WordFrequency::displayFrequency() {
  for (const auto& pair : wordCount) {
    cout << pair.first << " " << pair.second << endl;
  }
}

//Displays a histogram of items based on their frequency
void WordFrequency::displayHistogram() {
  for (const auto& pair : wordCount) {
    cout << pair.first << " ";
    for (int i = 0; i < pair.second; i++) {
      cout << "*";
    }
    cout << endl;
  }
}