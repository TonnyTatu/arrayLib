#include <iostream>
#include "include/Array.h"

#define newLine cout << endl;

using namespace std;

int main() {

  Array obj;
  int size;
  int searched;

  cout << "Enter Size of Array: ";
  cin >> size;
   
  obj.setValue(size);
  obj.printArray();
  
  cout << "Enter an Element to Search in Array: ";
  cin >> searched;
  cout << "Index: " << obj.indexOf(searched);
  
  newLine
  searched = 0;

  cout << "Enter an Element to Search in Array: ";
  cin >> searched;
  cout << "Search Element at: " << obj.search(searched);
  newLine
  
  cout << "Bubble Sort: " << endl;
  cout << "Ascending Order: " << endl;
  obj.bubbleSort(0);
  obj.printArray();
  cout << "Dscending Order: " << endl;
  obj.bubbleSort(1);
  obj.printArray();
  newLine

  return 0;
}
