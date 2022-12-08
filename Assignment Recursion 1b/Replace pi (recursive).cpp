// Change in the given string itself. So no need to return or print anything
void ftn(char input[], int length)
{
	if(length == 0)
	{
		return;
	}

	if(input[0] == 'p'  && input[1] == 'i')
	{
		// shift by 2 place
		for(int i=length-1; i>=0; i--)
		{
			input[i+2] = input[i];
		}
		//insert 3.14
		input[0] = '3';
		input[1] = '.';
		input[2] = '1';
		input[3] = '4';
		ftn(input+4, length-2);
	}
	else
	{
		ftn(input+1, length-1);
	}
}
void replacePi(char input[]) {
	// Write your code here
	int size = 0;
	for(int i=0; input[i]!='\0'; i++) size++;

	ftn(input, size);
}
