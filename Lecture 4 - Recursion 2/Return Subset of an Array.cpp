/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 2}, then output should contain 
	{{0}, 		// Length of this subset is 0
	{1, 2},		// Length of this subset is 1
	{1, 1},		// Length of this subset is also 1
	{2, 1, 2}}	// Length of this subset is 2

DonÃ¢ÂÂt print the subsets, just save them in output.
***/

int subset(int input[], int n, int output[][20]) {
    // Write your code here

	if(n == 0)
    {
        output[0][0] = 0;
        return 1;
    }
   
    int set = subset(input, n - 1, output);
   
   //copying
    for(int i = 0; i < set; i++)
    {
        for(int j = 0; j <= output[i][0]; j++)
        {
            output[set+i][j] = output[i][j];
        }
    }
   
    for(int i = 0; i < set; i++)
    {
        output[set+i][0] = output[i][0] + 1; // increase col size by 1
        output[set+i][output[set+i][0]] = input[n-1];
    }
   
    return 2 * set; 
}