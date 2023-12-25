#include <string>
#include<bits/stdc++.h>
#include <iostream> 
using namespace std;

vector<string>Permutations(string input)
{
	if(input.length() == 0)
	{
		vector<string>temp;
		temp.push_back("");
		return temp;
	}

	vector<string>ans = Permutations(input.substr(1, input.size() - 1));

	//Make copies
	int ans_len = ans.size();
	for(int i = 1; i < input.length(); i++) // -> How many copies will be created
	{
		for(int j = 0; j < ans_len; j++)
		{
			ans.push_back(ans[j]);
		}
	}

	// Now time is for adding 0 index character at diffrent place
	string cr = ""; // add empty because of conversion error; , we dont put char into string
	cr += input[0];
	int k = 0;
	

	for(int i = 0; i < input.length(); i++)  // on which index we have to add 0 index character
	{
		for(int j = 0; j < ans_len; j++)
		{
			string temp = ans[k];
			temp.insert(i, cr);  
			ans[k] = temp;
			k++;
		}
	}
	return ans;
}

int returnPermutations(string input, string output[]){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
	vector<string>ans = Permutations(input);

	for(int i = 0; i < ans.size(); i++)
	{
		output[i] = ans[i];
	}
	return ans.size();
}
