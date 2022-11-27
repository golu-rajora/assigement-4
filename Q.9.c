// Write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int x=1;
    printf("cubes of the first 10 natural numbers:-\n");
    while(x<=10)
    {
        printf("%d\n",x*x*x);
        x++;
    }
    getch();
    return 0;
}
