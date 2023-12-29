int pairSum(int *arr, int n, int num)
{
	//Write your code here

	// Alos we can solve this q using map

	int pair = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] + arr[j] == num)
			{
				pair++;
			}
		}
	}
	return pair;
}

/* Complexity:
    -> TC = O(n^2)
    -> SC = O(1)
*/