int ftn(char input[], int len)
{
    if(len == 0)
    {
        return 0;
    }

    int ans = ftn(input, len-1);

    return ans * 10 + (input[len-1] - '0');
}
int stringToNumber(char input[]) {
  // Write your code here

  int size = 0;
  for (int i = 0; input[i] != '\0'; i++)
    size++;

  int ans = ftn(input, size);
  return ans;
}
