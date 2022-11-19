#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int i,j;

    system("cls");

    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    printf("\n");

    for(i=5;i>1;i--)
    {
	    for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    getch();
    return 0;
}