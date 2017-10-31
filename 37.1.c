#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<string.h>


int main()
{
    FILE *fp = NULL;
    fp = fopen("Windows Server 2012 R2 Key.txt", "r");
    if (fp == NULL) {
        printf("Not opened\n");
        return 1;
    }
    FILE *fe = NULL;
    fe = fopen("new1.txt", "w+");
    if (fe == NULL) {
        printf("Not opened\n");
        return 1;
    }
    char ptr[50];
    char temp[11]= "Windows";
    char temp1[11] = "[Censored]";
    while (fscanf(fp, "%s", ptr, sizeof(ptr)) == 1)
    {
        puts(ptr);
        if (strstr(ptr, temp))
        {
            fprintf(fe, "%s\n", temp1);
        }
        else
        {
            fprintf(fe, "%s\n", ptr);
        }
    }
    fclose(fp);
    fclose(fe);
//    system("pause");
    return 0;
}