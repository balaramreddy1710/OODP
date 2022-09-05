#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    int ch = 0;
    FILE *fp = NULL;
    fp = fopen("file.txt", "r");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    FILE *fpTmp = NULL;
    fpTmp = fopen("tmp.txt", "w");
    if(fpTmp == NULL)
    {
        printf("Error in creating temporary file\n");
        fclose(fp);
        exit(1);
    }
    while((ch = fgetc(fp)) != EOF)
    {
        ch = (isupper(ch))? tolower(ch):toupper(ch);
        fputc(ch, fpTmp);
    }
    fclose(fp);
    fclose(fpTmp);
    remove("file.txt");
    rename("tmp.txt","file.txt");
    return 0;
}