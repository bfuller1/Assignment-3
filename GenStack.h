#include <iostream>

using namespace std;

template <class GS>
class GenStack {
public:
  GenStack(); // constructor
  int maxLength;
  GenStack(maxLength); // overloaded constructor
  ~GenStack(); // destructor

  char *symbolArray; // making the array

private:
  // N/A
}


// destructor class
template <class GS>
GenStack<GS>::~GenStack()
{
    delete symbolArray;
}
//template <class GS>
//GS GenStack ()
