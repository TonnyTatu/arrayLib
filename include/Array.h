#include <iostream>
using namespace std;

class Array {
  private:
    int *array;
    int size;

  public:
    void setValue(int size);
    void printArray(void);
    int indexOf(int searched);
    int search(int searched);
    void bubbleSort(int _method_);
};


//  setValue(int argument) method declare & initialize array.
void Array :: setValue(int size) {
  this->size = size;
  array = new int[size];
  
  for(int i = 0; i < size; i++) {
    cout << "Value at index [" << i << "] --> ";
    cin >> array[i];
  }
}



// printArray() method prints elements of array.
void Array :: printArray(void) {
  cout << endl;
  cout << "[";
  for(int i = 0; i < size; i++) {
    if(i == size - 1)
      cout << array[i] << "]" << endl;
    else
      cout << array[i] << ", ";
  }
}



// indexOf(int argument) method returns index.
int Array :: indexOf(int searched) {
  for(int i = 0; i < size; i++) 
    if(array[i] == searched)
      return i;
  return -1;
} // end of indexOf() method.



// search(int argument) method return index+1.
int Array :: search(int searched) {
  for(int i = 0; i < size; i++)
    if(array[i] == searched)
      return i + 1;
  return -1;
} // end of search() method.




// default argument '0' for Ascending Order AND argument '1' for Descending Order.
void Array :: bubbleSort(int _method_) {
  if(_method_ != 0) {
    for(int i = 0; i < size; i++) {
      int temp;
      temp = 0;
      for(int j = 0; j < size; j++) {
        if(array[i] > array[j]) {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
      }
    }
  }
  else {
    for(int i = 0; i < size; i++) {
      int temp;
      temp = 0;
      for(int j = 0; j < size; j++) {
        if(array[i] < array[j]) {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
      }
    }
  }
} // end of bubbleSort() method.


