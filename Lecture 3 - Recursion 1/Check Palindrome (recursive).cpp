bool checkPalindrome(char input[], int size) 
{
    if(size == 0 || size == 1)
    {
      return true;
    }

    if(input[0] == input[size-1])
    {
      return checkPalindrome(input+1, size-2);
    }

    else
    {
      return false;
    }

}

bool checkPalindrome(char input[]) {
  // Write your code here
  int length = 0;
  for(int i=0; input[i] != '\0'; i++) length++;
  return checkPalindrome(input, length);
}
