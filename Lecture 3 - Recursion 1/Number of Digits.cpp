int count(int n){
    //write your code here

    if(n == 0)
    {
        return 0;
    }

    int ans = count(n/10);

    return ans + 1;
}
