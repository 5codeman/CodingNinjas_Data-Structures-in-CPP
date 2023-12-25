#include <string>
using namespace std;

string key[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    if(num == 0 || num == 1)
    {
        output[0] = "";
        return 1;
    }

    int ans = keypad(num / 10,  output);

    if(num % 10 != 7 && num % 10 != 9)
    {
        string s1 = key[num % 10];
        //copy the output array 2 more times
        for(int i = 0; i < ans * 2; i++)
        {
            output[i + ans] = output[i];
        }
        // concate all character of s1 in the output array
        int i = 0;
        while(i < ans)
        {
            output[i] += s1[0];
            i++;
        }
        while(i < ans * 2)
        {
            output[i] += s1[1];
            i++;
        }
        while(i < ans * 3)
        {
            output[i] += s1[2];
            i++;
        }
        return ans * 3;
    }

    else
    {
        string s1 = key[num % 10];
        //copy the output array 2 more times
        for(int i = 0; i < ans * 3; i++)
        {
            output[i + ans] = output[i];
        }
        // concate all character of s1 in the output array
        int i = 0;
        while(i < ans)
        {
            output[i] += s1[0];
            i++;
        }
        while(i < ans * 2)
        {
            output[i] += s1[1];
            i++;
        }
        while(i < ans * 3)
        {
            output[i] += s1[2];
            i++;
        }
        while(i < ans * 4)
        {
            output[i] += s1[3];
            i++;
        }
        return ans * 4;
    }
}