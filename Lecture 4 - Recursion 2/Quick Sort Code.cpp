/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int input[], int start, int end) {
	// Write your code here
	int pivot_element = input[start];
	int count = 0;
	int x = start;
	for(int i = start + 1; i <= end; i++)
	{
		if(input[i] <= pivot_element) count++;
	}

	//keep pivot element at their correct index
	input[start] = input[start + count];
	input[start + count] = pivot_element;
	
	while (start < end) 
	{
		if(input[start] > pivot_element && input[end] <= pivot_element)
		{
			int temp = input[start];
			input[start] = input[end];
			input[end] = temp;
			start++;
			end--;
		}
		else if(input[start] <= pivot_element) start++;

		else if(input[end] > pivot_element) end--;
	}
	return x + count;
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(start >= end) return;

	int pivot =  partitionArray(input, start, end);

	quickSort(input, start, pivot - 1);
	quickSort(input, pivot + 1, end);
}