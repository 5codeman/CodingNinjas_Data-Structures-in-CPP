#include<bits/stdc++.h>
int findUnique(int *arr, int n) {
    // Write your code here
    
    // Also If we want we can solve uning bit_XOR

    sort(arr, arr + n);
    for(int i = 0; i < n; i += 2)
    {
        if(arr[i] != arr[i+1]) return arr[i];
    }

    /* Complexity:
    -> TC = O(nlogn)
    -> SC = O(1)
    */
    
}