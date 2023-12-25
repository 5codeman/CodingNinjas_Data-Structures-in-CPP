#include <iostream>
#include <string>
using namespace std;

void Permutations(string input, string output)
{
	if(input.length() == 0)
	{
		cout << output << endl;
		return;
	}

	for(int i = 0; i <= output.length(); i++)
	{
		Permutations(input.substr(1),  output.substr(0, i) + input[0] + output.substr(i));
	}
}

void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
	Permutations(input, "");
}
