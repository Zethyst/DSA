// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
int main(void)
{

    int i = 1;
    int j = 1;
    i = i++; //Assignment to self and Increment of Self => Assignment dominates increment
    j = i++;
    printf("%d %d", i, j);
    return 0;
}
// END OF LINE