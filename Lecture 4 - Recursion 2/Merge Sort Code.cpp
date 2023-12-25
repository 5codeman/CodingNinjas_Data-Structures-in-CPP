#include<bits/stdc++.h>
using namespace std;
void mergeSort(int arr[], int l, int r) {
    
    // Write Your Code Here
    int mid = (l + r) / 2;

    if(l == r) return; 

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);

    vector<int>temp;

    int a1 = l; 
    int a2 = mid + 1; 

    while(a1 != mid + 1 && a2 != r + 1) 
    {
      if (arr[a1] < arr[a2]) 
      {
        temp.push_back(arr[a1]);
        a1++;
      }

      else if(arr[a1] >= arr[a2]) 
      {
        temp.push_back(arr[a2]);
        a2++;
      }
      
    }

    if(a1 == mid + 1) 
    {
        while(a2 != r + 1) 
        {
            temp.push_back(arr[a2]);
            a2++;
        }
    }

    if(a2 == r + 1) 
    {
        while(a1 != mid + 1) 
        {
            temp.push_back(arr[a1]);
            a1++;
        }
    }
   
    for(int i = l; i <= r; i++) { 
        arr[i] = temp[i - l]; 
    }

}