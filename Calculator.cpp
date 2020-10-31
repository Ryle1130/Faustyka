#include<iostream>
using namespace std;

int main()
{
   float num1,num2,answer;
   int choice;

    cout << "CALCULATOR\n\n";
    
    while (true)
    {
     cout << "1. Add\n" <<
             "2. Subtraction\n" <<
             "3. Multiplication\n" <<
             "4. Division\n" <<
             "5. Exit\n\n" <<
             "Choose a number: ";
        
     cin >> choice;
    
        if (choice == 5)
        break;
        
     cout << "\nPlease enter the first number: "; 
     cin >> num1;
     cout << "Please enter the second number: ";
     cin >> num2;
    
    if (choice == 1)
      answer = num1 + num2;
    else if (choice == 2)
      answer = num1 - num2;
    else if (choice == 3)
      answer = num1 * num2;
    else if (choice == 4)
      answer = num1 / num2;
    
    cout << "\nThe answer is " << answer << "\n\n";
    }
    
    cout << "\n\nProgram Terminated \nProgrammed by: Miole, Jhon Rylbert";
    
    return 0;
}
