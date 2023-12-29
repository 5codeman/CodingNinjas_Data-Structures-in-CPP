int arrayRotateCheck(int *input, int size)
{
    int small = input[0];
    int index = 0;
    for(int i = 1; i < size; i++)
    {
        if(input[i] < small)
        {
            small = input[i];
            index = i;
            break;
        }
    }
    return index;
}

/* Complexity:
    -> TC = O(n)
    -> SC = O(1)
*/