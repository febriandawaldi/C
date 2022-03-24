#include <stdio.h>
#include <stdlib.h>
/*
variable is a container where we can store data
this code example how we use variable
*/
int main()
{
    // this is how create variable character in c
    char personNameOne[] = "Desi";
    int agePersonOne = 33;

    char personNameSecond[] = "Waldi";
    int agePersonSecond = 30;



    printf("Story of %s \n", personNameOne);

    printf("There once was a man named %s \n", personNameOne);
    printf("he was %d years old. \n", agePersonOne);
    printf("he really like the name of %s", personNameOne);
    printf("but did not like being %d.\n\n", agePersonOne);



    printf("Story of %s \n", personNameSecond);

    printf("There once was a man named %s \n", personNameSecond);
    printf("he was %d years old. \n", agePersonSecond);
    printf("he really like the name of %s", personNameSecond);
    printf("but did not like being %d.\n", agePersonSecond);

    return 0;
}
