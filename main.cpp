#include <iostream>

using namespace std;

void cinArray(int array[], const int n);
int findCount(int array[], int n);
void displaySeq(int array[], const int n);

int main() {
  int N;
  cin >> N;
  const int n = N;
  int array[n];
  int count = 0;

  cinArray(array, n);
  
  cout <<  findCount(array, n) << endl;

  displaySeq(array, n);
  
  
}


// user defined functions
void cinArray(int array[], const int n){
  for (int i = 0; i < n; i++)
    cin >> array[i];
}

int findCount(int array[], const int n){
  int count = 1;
  int biggest = array[0];
  for (int i = 0; i < n; i++){
      if (biggest < array[i]){
        biggest = array[i];
        count++;
      }
    }
    return count;
}

void displaySeq(int array[], const int n){
  int biggest = array[0];
  cout << array[0] << " ";
  for (int i = 0; i < n; i++){
    if (biggest < array[i]){
      cout << array[i] << " ";
      biggest = array[i];
    }
  }
}