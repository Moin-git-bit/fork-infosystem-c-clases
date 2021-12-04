/// Accepting Array Element from user & Then displaying All Element ///

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, bill[Size] = {0};

    for(i = 0 ; i < Size ; i++ )
    {
        printf("\n Enter bill no %d = ",(i+1) );
        scanf("%d",&bill[i]);
    }

    getche();
    system("cls");

    printf("\n\n Element in Array are => \n\n");

    for( i = 0 ; i < Size ; i++)
    {
        printf("\n Amount in bill no %d = %d\n\n", (i + 100001),bill[i]);
    }

    printf("\n thanks \n");

    getch();
    return 0;
}
