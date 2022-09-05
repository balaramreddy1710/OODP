#include <stdio.h>
#include <stdlib.h> 

int main()
{
  FILE * fptr;
  char ch, * word, * a;
  int i=0,p=0;

  word =(char *) malloc(25 * sizeof(char));
  fptr = fopen("text.txt", "r");

  if (fptr==NULL)
  {
    printf("File not found. \n");
  }
  else
  {
    printf("Word: ");
    scanf("%s", word);

    while(word[p]!='\0')
    {
      p++;
    }

    a=(char *) malloc(p * sizeof(char));

    while (*(ch+a) != EOF)
    {
      *(ch+a) = getc(fptr);

      if (*(ch+a) == * word)
      {
        i++;
      }
    }
  }  
  if (i==0)
    printf("Word not found.\n");
  else
  {
    printf("Word found %d times.\n",i);
  }

  fclose(fptr);
  return 0;
}