#include <stdio.h>
#include <string.h>
// THIS CODE PRINTS THE DAY YOU WHERE BORN WHEN YOU INPUT YOUR YEAR OF BIRTH, CODE STARTS HERE
int main (){
    int age;
    int result;
    char name[25];
    printf("What is your name?\n: ");
    fgets (name, 25, stdin);
    name[strlen (name)-1] = '\0';
    printf("What year where you born? \n: ");
    scanf ("%d", &age);
    result = 2023 - age;
    printf("Hello %s,\n", name);
     printf("You are %d years old.\n", result);
    return (0);
}
// THIS CODE PRINTS THE DAY YOU WHERE BORN WHEN YOU INPUT YOUR YEAR OF BIRTH, CODE ENDS HERE