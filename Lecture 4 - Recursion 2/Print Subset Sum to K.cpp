#include<bits/stdc++.h>
using namespace std;

void printSubset(int input[], int size, int k, vector<int> arr) {
    if(size == 0)
    {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) 
        {
            sum += arr[i];
        }
        if(sum == k) 
        {
            for(int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            //return;
        }
        return;
    }

    printSubset(input + 1, size - 1, k, arr);
    arr.push_back(input[0]);
    printSubset(input + 1, size - 1, k, arr);
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    vector<int> arr;
    printSubset(input, size, k, arr);
}