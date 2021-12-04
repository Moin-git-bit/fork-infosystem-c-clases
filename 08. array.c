/// accepting array elements from user & then displaying all elements ///

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, values[7] = {0};

    for(i = 0, j = 1; i < 7 ; i++,j++)
    {
        printf("\n enter element no %d = ",j);
        scanf("%d",&values[i]);
    }

    getch();
    system("cls");

    for(i = 0, j = 101 ; i < 7 ; i++,j++)
    {
        printf("\n  value of %d element = %d\n",j,values[i]);
    }

    printf("\n thanks");

    getch();
    return 0;
}

