void print(int n){
    //write your code here

    if(n == 1)
    {
        cout << n << " ";
        return;
    }

    print(n-1);

    cout << n << " ";
}
