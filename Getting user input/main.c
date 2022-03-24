#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    double gpa;
    char grade;
    char name[20];

    printf("what is complete name: ?");
    fgets(name, 20, stdin);
    //scanf("%s", name);
    printf("your name is ");

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("you are %d years old, LOL\n", age);

    printf("Enter your gpa : ");
    scanf("%lf", &gpa);
    printf("your gpa is %f \n");

    printf("what is your grade in c programming?: ");
    scanf("%c", &grade);
    printf("your grade is %c ", grade);


    return 0;

}
