#include<stdio.h>
void test (int p);
int main()
{
    int i,n;
    scanf("%d",&n);


        test(n);

}
void test (int p)
{
    int i,count_m=0,count_c=0,m,c;
    for(i=0; i<p; i++)
    {
        scanf("%d%d",&m,&c);
        if(m>c)
        {
            count_m++;

        }
        else
        {
            count_c++;

        }
    }
    if(count_m>count_c)
        printf("Mishka\n");
    else if(count_m<count_c)
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");
}
