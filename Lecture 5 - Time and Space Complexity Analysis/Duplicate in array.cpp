int findDuplicate(int *arr, int n)
{
    //Write your code here
    int total_sum = 0;
    for(int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }

    int summation_of_n = ((n - 2) * (n - 1)) / 2;

    int ans =  total_sum - summation_of_n;

    return ans ;

}

  /* Complexity:
    -> TC = O(n)
    -> SC = O(1)
  */