#include <iostream>
#include <string>
using namespace std;

string key[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void printAll(int num, string output) 
{
    if(num == 0 || num == 1)
    {
        cout << output << endl;
        return;
    }

    string KEY = key[num % 10];

    for(int i = 0; i < KEY.size(); i++)
    {
        printAll(num / 10,  KEY[i] + output);
    }
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string output = "";
    printAll(num, output);
}
