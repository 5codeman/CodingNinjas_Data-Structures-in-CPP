bool checkInput(char input[], int size, bool check)
{
	if(size == 0) return true;

		if(input[0] == 'a')
		{
			checkInput(input + 1, size - 1, true);
		}
		else if(check == true && input[0]== 'b' && input[1] == 'b')
		{
			checkInput(input + 2, size - 2, false);
		}
		else return false;
}
bool checkAB(char input[]) {
	// Write your code here
	int size = 0;
	for(int i = 0; input[i] != '\0'; i++) size++;
	if(input[0] != 'a') return false;
	else checkInput(input + 1, size -1, true);
}



