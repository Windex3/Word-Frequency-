# Word Frequency Tracker

A simple C++ program that reads a text file and counts how many times each word appears.

---

## 🧰 Features
- Reads grocery items from a text file (`CS210_Project_Three_Input_File.txt`)
- Counts and stores item frequencies using a `std::map`
- Displays:
  - Frequency of a specific item
  - A full list of items and their frequencies
  - A histogram made of asterisks (`*`)
- Saves results to an output file (`frequency.dat`)

---

## 🚀 How to Run
### 1️⃣ **Compile**
Use any modern C++ compiler (g++, clang++, or Code::Blocks).  
If using g++:
```bash
g++ main.cpp WordFrequency.cpp -o CornerGrocer
