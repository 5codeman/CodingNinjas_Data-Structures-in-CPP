/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/

#include<bits/stdc++.h>
using namespace std;

int subset_sum(int input[], int n, int k, vector<vector<int>>& temp_arr) {
    // Write your code here

	if(n == 0)
    {
        vector<int> temp;
        temp_arr.push_back(temp);
        return 1;
    }
   
    int set = subset_sum(input, n - 1, k, temp_arr);
   
    //copying
    for(int i = 0; i < set; i++)
    {
        int sum = 0;
        for(int j = 0; j < temp_arr[i].size(); j++)
        {
            sum += temp_arr[i][j];
            if(sum > k) break;
        }
        if(sum <= k)
        {
            vector<int> row;
            for(int j = 0; j < temp_arr[i].size(); j++)
            {
                row.push_back(temp_arr[i][j]);
            }
            temp_arr.push_back(row);
        }
    }
   
    for(int i = 0; i < temp_arr.size() - set; i++)
    {
        temp_arr[set+i].push_back(input[n - 1]);
    }
   
    return temp_arr.size(); 
}

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
	vector<vector<int>> temp_arr;
	int temp_arr_size = subset_sum(input, n, k, temp_arr);

    int p = 0;
    for(int i = 0; i < temp_arr_size; i++)
    {
        int sum = 0;
        for(int j = 0; j < temp_arr[i].size(); j++)
        {
            sum += temp_arr[i][j];
            if(sum > k) break;
        }
        if(sum == k)
        {
            output[p][0] = temp_arr[i].size();
            for(int j = 0; j < temp_arr[i].size(); j++)
            {
                output[p][j+1] = temp_arr[i][j];
            }
            p++;
        }
    }
    return p;
}