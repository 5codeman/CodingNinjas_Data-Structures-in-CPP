int tripletSum(int *arr, int n, int num)
{
	//Write your code here
    sort(arr, arr + n);
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int k = n - 1;
        int index = n - 1;
         for(int j = i + 1; j < n; j++)
         {
             while(k > j)
             {
                 if((arr[i] + arr[j] + arr[k]) == num) count++;

                 else if((arr[i] + arr[j] + arr[k]) < num) break;

                 else index--;
                 k--;
             }
             k = index;
         }
    }
    return count;
}

/* Complexity:
    -> TC = O(n^2)
    -> SC = O(1)
    */