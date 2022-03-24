#include <stdio.h>
#include <stdlib.h>
/*
this lesson about constant
const int num = 5;

*/
int main()
{
    int number = 5;
    const int number2 = 70;
    printf("this is const, value cant change %d\n", number2);
    printf("%d\n", number);
    number = 8;
    printf("%d\n", number);



    return 0;
}
