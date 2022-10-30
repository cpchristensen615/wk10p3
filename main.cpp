#include <iostream>

using namespace std;

void cinArray(int array[], const int n);
int findCount(int array[], int n, int count);
void displaySeq(int array[], const int n);

int main() {
  int N;
  cin >> N;
  const int n = N;
  int array[n];
  int count = 0;

  cinArray(array, n);
  
  cout <<  findCount(array, n, count) << endl;

  displaySeq(array, n);
  
  
}


// user defined functions
void cinArray(int array[], const int n){
  for (int i = 0; i < n; i++)
    cin >> array[i];
}

int findCount(int array[], const int n, int count){
    for (int i = 0; i < n; i++){
      if (array[i] > array[i+1])
        count++;
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