#include <iostream>
#include <vector>
using namespace std;

  vector<int> rotate_left(const vector<int>& numbers,int rotate_position){
  vector<int> left_rotation;
  for(int i = 0; i < numbers.size();i++){
    left_rotation.push_back(numbers[(i + rotate_position) % numbers.size()]);
  }
  return left_rotation;
}

int main(){ 
  int rotate_position= 1; //change this to select the amount of the left rotation
  int size;
  cout << "enter the size of the array: ";
  cin >> size;

  vector<int>numbers(size);

  for(int i=0; i < size; i++){
    cout << "Enter number "<< i + 1<< ": ";
    cin >> numbers[i];
  }
      //original array
  cout << "\toriginal array"<<endl;
  for(int i; i < numbers.size();i++){
    cout << "\t " << numbers[i];
  }

      //left rotation display
  vector<int> rotated = rotate_left(numbers, rotate_position);
  cout << "\n  array rotated to the left"<<endl;;
  for (int num : rotated) {
    cout << "\t "<< num;
  }
  cout << endl;
  return 0;
}