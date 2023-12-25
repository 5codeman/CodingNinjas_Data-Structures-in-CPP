#include <string.h>
using namespace std;

void printAllCodes(string input, string output) 
{
    if(input.length() == 0)
    {
        cout << output <<endl;
        return;
    }

    int integer = input[0] - '0';
    char cr = (integer - 1) + 'a';

    printAllCodes(input.substr(1, input.size() - 1), output + cr);

    int integer1 = integer * 10 + input[1] - '0'; 
    char cr1 = (integer1 - 1) + 'a';
    
    if(input.size() >= 2 && integer1 <= 26)
    {
        printAllCodes(input.substr(2, input.size() - 2), output + cr1);
    }
}

void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    string output = "";
    printAllCodes(input, output);
}

