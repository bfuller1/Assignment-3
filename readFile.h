#include <iostream>
#include <fstream>
#include <string>
#include <fstream>

using namespace std;

template <class RF>
class ReadFile {
public:
  string fileName; // Variables
  string fileLine;

  //int listSize = 1;
  //list<char> symbols;

  //cout << "Please enter name of file you want to check: " << endl;
  //cin >> fileName;

  ifstream myFile (fileName); // the is the function that is meant to read a file
  if (myFile.is_open()) {
    while (getline (myFile,fileLine)) {
      cout << fileLine << '\n'; // it was originally printing lines
    }
    myFile.close();
  }
  //else
  //cout << "Cannot open file";
};

template <class E>
GenStack<E>::GenStack()
