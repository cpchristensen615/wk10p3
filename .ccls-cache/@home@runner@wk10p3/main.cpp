#include <iostream>

using namespace std;

int main() {
  cin >>  N;
  int biggest;
  int next;
  int count = 1;
  cin >> N;
  
  int array[N];
  cin >> N;
  
  for (int i = 0; i < N; i++)
    cin >> array[i];
   
  for (int i = 0; i < (N-1); i++){
      cin >> next;
      if (next > biggest){
        cout << biggest;
        biggest = next;
        count ++;
      }
      else
        biggest = biggest;
        
    
    }
  cout << biggest << endl;
  cout << count;
}