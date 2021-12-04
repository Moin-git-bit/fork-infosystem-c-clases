#include<stdio.h>
#include<conio.h>

int main()
{
    int values[5] = {21,55,15,75,95};

    printf("\n value 1st Element = %d.",values[0]);
    printf("\n value 2nd Element = %d.",values[1]);
    printf("\n value 3rd Element = %d.",values[2]);
    printf("\n value 4th Element = %d.",values[3]);
    printf("\n value 5th Element = %d.\n\t",values[4]);

    getche();

    values[4] = 45;
    values[2] = 102;
    values[0] = 4;

    printf("\n\n New values => \n\n");

    printf("\n value 101 Element = %d.",values[0]);
    printf("\n value 102 Element = %d.",values[1]);
    printf("\n value 103 Element = %d.",values[2]);
    printf("\n value 104 Element = %d.",values[3]);
    printf("\n value 105 Element = %d.",values[4]);

    getch();
    return 0;
}
