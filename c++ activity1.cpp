#include<iostream>
using namespace std;

int main()
{
   int num1,num2,num3;
  
    cout << "Enter the value of first number: ";
    cin >> num1;
    
    cout << "Enter the value of second number: ";
    cin >> num2;
    
    cout << "Enter the value of third number: ";
    cin >> num3;
    
    if(num1>num2&&num1>num3){
       cout<< "First number is greatest:"<<endl<<"which is "<<num1;
    }
    else if(num2>num1&&num2>num3){
       cout<< "Second number is greatest:"<<endl<<"which is "<<num2;
    } 
    else{
       cout<< "Third number is greatest:"<<endl<<"which is "<<num3;
    }
    cout<<"\n\nprogrammed by: Miole, Jhon Rylbert S.";
    
    return 0;
}