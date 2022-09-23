#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
int main()
{
  FILE * fptr;
  char str[100],*a,* word;
  int i=0,j=0;

  word =(char *)malloc(25 * sizeof(char));
  fptr = fopen("text.txt", "r");

  if (fptr==NULL)
  {
    printf("File not found. \n");
  }
  else
  {
    printf("Word: ");
    scanf("%s", word);
    while ((fgets(str, 100, fptr)) != NULL)
    {
      while ((a = strstr(str + j, word)) != NULL)
        {
      j = (a - str) + 1;

      i++;
        }
    }

  }
  if (i==0){
    printf("Word not found.\n");
  }
  else
  {
    printf("Word found %d times.\n",i);
  }
  fclose(fptr);
  return 0;
}