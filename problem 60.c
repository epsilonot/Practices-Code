
/*. Write a C program to create enumerated data types for 7 days and display their values in integer constants. Go to the editor
Sun = 0
Mon = 1
Tue = 2
Wed = 3
Thu = 4
Fri = 5
Sat = 6 */
#include <stdio.h>

enum days {
    Sun = 0,
    Mon = 1,
    Tue = 2,
    Wed = 3,
    Thu = 4,
    Fri = 5,
    Sat = 6
};

int main() {
    printf("Sun = %d\n", Sun);
    printf("Mon = %d\n", Mon);
    printf("Tue = %d\n", Tue);
    printf("Wed = %d\n", Wed);
    printf("Thu = %d\n", Thu);
    printf("Fri = %d\n", Fri);
    printf("Sat = %d\n", Sat);
    return 0;
}
