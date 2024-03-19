#include<stdio.h>
int main()
{
    char name1[100],name2[100],name3[100];
    int x/*,l1,l2,l3*/;
    printf("Enter your name1:");
    gets(name1);
    /*if(isupper(name1[100]))
        tolower(name1[100]);*/
    puts(name1);
    printf("%d\n",strlen(name1));
    printf("\n\n\n\n\n\n\n\n\n");
    printf("Enter your name2:");
    gets(name2);
    puts(name2);
    printf("%d\n",strlen(name2));
    printf("\n\n\n");
    //strcat(name1,name2);
    //puts(name1);
    /*strncpy(name1,name2,6);
    puts(name1);
    printf("\n\n");
    strncpy(name2,name1,6);
    puts(name2);
    printf("\n\n");*/

    x=strcmp(name1,name2);
    printf("%d\n",x);
    if(strchr(name1,'b'))
        printf("yes\n");
    else
        printf("No\n");
     if(strchr(name2,'b'))
        printf("yes\n");
    else
        printf("No\n");
}
