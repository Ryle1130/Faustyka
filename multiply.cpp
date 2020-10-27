#include<iostream>
using namespace std;

int main()
{
  int number,r,r2;

    cout << "Enter an Integer: ";
    cin >> number;
    cout << "Enter Range: ";
    cin >> r;
    
    for(r2=1;r2<=r;r2++){
     cout << number << "*" <<  r2 << "=" << (number*r2) << endl;
    }
    
    return 0;
}