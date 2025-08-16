#include <iostream>
using namespace std;

int main()
{
  // Your code here 
  // Be sure to follow the specified requirements and output format
  
  int count=0, num=0;
  int data[20]; //-9 to 0 = 10 1 to 9 = 9 + null

  for (int i=0; i < 20; i++) { //initialization set each to 0
      data[i]=0; 
  }

  cin >> num;

  while (num != 100 && num != -100) {
    if (num >= -9 && num <= 9) {
      //not add- update to array
      data[num + 9]++;
    }
    else {
      count++;
    }
    cin >> num;
  }

  for (int i=0; i < 19; i++) {
    cout << i-9 << ": " << data[i] << endl;
  }
  cout << "Out Of Range: " << count << endl;
  return 0;
}

//char str[2]