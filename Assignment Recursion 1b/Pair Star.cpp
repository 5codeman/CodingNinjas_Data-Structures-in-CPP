// Change in the given string itself. So no need to return or print the changed
// string.
void ftn(char input[], int len) {
  if (len == 0) 
  {
    return;
  }

  if(input[0] == input[1])
  {
    for (int i = len; i >= 0; i--) 
    {
      input[i + 1] = input[i];
    }
    input[1] = '*';
    ftn(input + 2, len - 1);
  }
  else
  {
    ftn(input + 1, len - 1);
  }
  
}
   void pairStar(char input[]) {
    // Write your code here

    int size = 0;
    for (int i = 0; input[i] != '\0'; i++) size++;

    ftn(input, size);
}
