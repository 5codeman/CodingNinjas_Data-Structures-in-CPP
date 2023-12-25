// input - input array
// size - length of input array
// element - value to be searched
int findelement(int input[], int x, int left, int right)
{
    if(left > right) return - 1;

    int mid = (left + right) / 2;

    if(input[mid] == x) return mid;

    if(input[mid] > x)
    {
        return findelement(input, x, left, mid - 1);
    }

    else if(input[mid] < x)
    {
        return findelement(input, x, mid + 1, right);
    }
}
int binarySearch(int input[], int size, int element) {
    // Write your code here
    return findelement(input, element, 0, size - 1);

}
