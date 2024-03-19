#include<stdio.h>
int main()
{
    int i;
    char strg_1[80],strg_2[80];
    printf("Enter a string\n");
    scanf("%s",strg_2);
    for(i=0; strg_2[i]!='\0'; i++)
    {
        strg_1[i]=strg_2[i];
    }
    strg_1[i]='\0';
    printf("\n");

    printf("%s\n",strg_1);
    printf("Number of character:%d\n",i);
    return 0;

}
