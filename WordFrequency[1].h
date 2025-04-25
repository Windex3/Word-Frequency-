#ifndef WORDFREQUENCY_H
#define WORDFREQUENCY_H

#include <string>
#include <map>

using namespace std;

// Class to count word frequency in a text file
class WordFrequency {
  private:
    std::map<std::string, int> wordCount;

  public:
    void countWords(const string& filename);
    void writeToFile(const string& filename);
    void lookForFrequency();
    void displayFrequency();
    void displayHistogram();
};

#endif