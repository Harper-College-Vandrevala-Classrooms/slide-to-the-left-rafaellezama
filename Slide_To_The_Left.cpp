#include <iostream>
using namespace std;



int main(){ 
  int size;
  int *pStore;
  cout << "enter the size of the array: ";
  cin >> size;
  pStore = new int[size];
  for(int i=0; i < size; i++){
    cout << "Enter numbers: ";
    cin >> pStore[i];
  }

   //loop that displays the numbers of the array  
  for(int i =0; i <(size); i++){
    cout << *(pStore + i)<< " ";
  }

  delete[] pStore;
  return 0;
}