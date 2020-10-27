#include<iostream>
using namespace std;

int main()
{
  int number,sum=0,i;
  float average;

    cout << "Enter the Numbers of Data: ";
    cin >> number;
    
    int array [number];
    if(number<20){
    for(i = 0; i<number; i++){
      cout << "Enter Number: ";
      cin >> array[i];
      sum += array[i];
    }
      average = sum / number;
    
    cout << "The Average = " << average << endl;

    }
    else{
      cout << " Error! Number should in range of (1 to 20)";
     }
    
    return 0;
}