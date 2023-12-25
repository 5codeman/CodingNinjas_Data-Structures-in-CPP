#include <string.h>
#include<bits/stdc++.h>
using namespace std;

vector<string> returnCodes(string input) {

    if(input.length() == 0)
    {
        vector<string>temp;
        temp.push_back("");
        return temp;
    }

    vector<string>ans1 = returnCodes(input.substr(1, input.size() - 1));

    int integer = input[0] - '0';
    int integer1 = integer * 10 + input[1] - '0';

    vector<string> ans2;

    if (input.size() >=2 && integer1 <= 26) 
    {
        ans2 = returnCodes(input.substr(2, input.size() - 2));
    }

    vector<string>combine;
    
    char cr = (integer - 1) + 'a';
    for(int i = 0; i < ans1.size(); i++)
    {
        combine.push_back(cr + ans1[i]);
    }

    char cr1 = (integer1 - 1) + 'a';
    for(int i = 0; i < ans2.size(); i++)
    {
        combine.push_back(cr1 + ans2[i]);
    }

    return combine;

}

int getCodes(string input, string output[10000]) {
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */
    vector<string>ans = returnCodes(input);

    for(int i = 0; i < ans.size(); i++)
    {
        output[i] = ans[i];
    }

    return ans.size();
}