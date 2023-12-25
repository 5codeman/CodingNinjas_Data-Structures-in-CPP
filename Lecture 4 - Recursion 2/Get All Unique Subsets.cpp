map<vector<int>, int> mp;

int getUniqueSubsets(vector<int>& arr, int size, vector<vector<int>>& output)
{
    if(size == 0)
    {
        vector<int> temp;
        output.push_back(temp);
        return 1;
    }
   
    int set1 = getUniqueSubsets(arr, size - 1, output);
   
   //copying
    for(int i = 0; i < set1; i++)
    {
        vector<int> temp;
        for(int j = 0; j < output[i].size(); j++)
        {
            temp.push_back(output[i][j]);
        }
        temp.push_back(arr[size - 1]);
         if(mp.count(temp) == 0)
         {
            mp[temp] = 1;
            output.push_back(temp);
         }
    }   
    return output.size(); 
}

vector<vector<int>> getUniqueSubsets(vector<int>& arr) {
    // Write Your Code Here    
    vector<vector<int>>output;
    int len = arr.size();
    getUniqueSubsets(arr, len, output);
    return output;
}