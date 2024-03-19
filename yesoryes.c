#include<stdio.h>
#include<string.h>

//void test(char yes[], int p);

int main(){
    int t,i;

    scanf("%d",&t);
    char yes[t][4];
    for(i=0;i<t;i++)
        scanf("%3s", yes[i]);

     for(i=0;i<t;i++){
        if (strcmp(yes[i], "YES") == 0|| strcmp(yes[i], "YeS") == 0 || strcmp(yes[i], "YEs") == 0 ||
            strcmp(yes[i], "yES") == 0 || strcmp(yes[i], "yes") == 0 || strcmp(yes[i], "yeS") == 0 ||
            strcmp(yes[i], "Yes") == 0 || strcmp(yes[i], "yEs") == 0) {
            printf("YES\n");
            } else {
            printf("NO\n");
        }

}
}

