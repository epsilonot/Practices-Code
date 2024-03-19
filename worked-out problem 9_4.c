#include<stdio.h>
#include<ctype.h>
int main()
{
    int vow_c=0,cons_c=0,i;
    char str[30];
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        char curent_char=tolower(str[i]);
        if(isalpha(curent_char))
        {
            if(curent_char=='a'||curent_char=='e'||curent_char=='i'||curent_char=='o'||curent_char=='u')
            {
                vow_c++;
            }
            else
            {
                cons_c++;
            }
        }
    }
    printf("Number of vowels = %d\n",vow_c);
    printf("Number of constant = %d",cons_c);
    return 0;
}
