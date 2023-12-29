void rotate(int *input, int d, int n)
{
    //Write your code here

    int output[n];
    int k = 0;
    for(int i = d; i < n; i++)
    {
        output[k] = input[i];
        k++;
    }
    for(int i = 0; i < d; i++)
    {
        output[k] = input[i];
        k++;
    }
    
    for(int i=0; i < n; i++)
    {
        input[i] = output[i];
    }
}

/* Complexity:
    -> TC = O(n)
    -> SC = O(n)
*/