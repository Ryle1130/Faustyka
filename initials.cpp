#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
string input, output;

    cout << "Enter your full name: ";
    getline (cin, input);
    
    output += input.at(0) + ('A' - 'a');
    
    for (int i = 0; i < input.size(); i++)
    {
    if (input[i] == ' ')
    {
    output += (input[i+1] + ('A' - 'a'));
    }
    }
    cout << "Initials: " << output << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}