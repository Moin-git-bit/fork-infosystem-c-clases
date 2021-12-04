/// accepting  element from user & then displaying all elements

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()

{
    int values [5] = {0};

    printf("\n Enter element 1st = ");
    scanf("%d",&values[0]);

    printf("\n Enter element 2nd = ");
    scanf("%d",&values[1]);

    printf("\n Enter element 3rd = ");
    scanf("%d",&values[2]);

    printf("\n Enter element 4th = ");
    scanf("%d",&values[3]);

    printf("\n Enter element 5th = ");
    scanf("%d",&values[4]);

    getch();
    system("cls");

    printf("\n\n elements in array are => \n\n");

     printf("\n value of 101 element = %d.",values[0]);
     printf("\n value of 102 element = %d.",values[1]);
     printf("\n value of 103 element = %d.",values[2]);
     printf("\n value of 104 element = %d.",values[3]);
     printf("\n value of 105 element = %d.\n",values[4]);

     printf("\n thanks");

     getch();
     return 0;
}
