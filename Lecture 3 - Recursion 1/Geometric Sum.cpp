double geometricSum(int k) {
    // Write your code here
    if(k == 0)
    {
        return 1;
    }

    float ans = geometricSum(k-1);

    return ans + (1/pow(2,k));
}