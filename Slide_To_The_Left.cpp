#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool promptLeftorsRight(){
  bool rotateLeft = false;
  string value;
  do{
    cout << "Would you like to rotate (L)eft or (R)ight?: " <<endl;
    cin >> value;
   //  conver to lowercase
    for (int i= 0; i <value.length(); i ++) value[i] = tolower(value[i]);
    if(value == "left" || value == "l"){
      rotateLeft = true;
      break;
    }
    else if(value == "right" || value == "y"){
      rotateLeft: false;
      break;
    }else{
      cout <<"Enter right or left: ";
    }
  } while (true);
  return rotate_left;
}



vector<int> rotate_left(const vector<int>& numbers,int rotate_position){
  vector<int> left_rotation;
  for(int i = 0; i < numbers.size();i++){
    left_rotation.push_back(numbers[(i + rotate_position) % numbers.size()]);
  }
  return left_rotation;
}

vector<int> rotate_right(const vector<int>& numbers,int rotate_position){
  vector<int> right_rotation;
  int size = numbers.size();
  for(int i = 0; i < numbers.size();i++){
    right_rotation.push_back(numbers[(i - rotate_position + size) % numbers.size()]);
  }
  return right_rotation;
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
  bool rotateLeft = promptYesNo();
      //left rotation display
  vector<int> rotated;
  if (rotateLeft){
    rotated = rotate_left(numbers, rotate_position);
    cout << "Array rotated to the left: ";
  }else{
    rotated = rotate_right(numbers; rotate_position);
    cout << "Array rotated to the right: ";
  }


  for(int num: rotated){
    cout << num << " ";
  }
  cout << endl;

  return 0;
}