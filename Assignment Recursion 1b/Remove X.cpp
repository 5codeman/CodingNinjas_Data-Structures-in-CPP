// Change in the given string itself. So no need to return or print anything
void ftn(char input[], int length) {
  if (length == 0) 
  {
    return;
  }

  if (input[0] == 'x') 
  {
    // shift by 1 place
    for (int i = 0; i < length; i++)
    {
      input[i] = input[i + 1];
    }
    ftn(input, length-1);
  } else {
    ftn(input + 1, length - 1);
  }
}
  void removeX(char input[]) {
    // Write your code here
    int size = 0;
    for (int i = 0; input[i] != '\0'; i++) size++;

    ftn(input, size);
  }
