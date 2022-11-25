#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int i,j,p,jml;
    system("cls");

    for(i=1;i<=10;i++)
    {
        for(j=1,jml=0;j<=i;j++)
        {   
            jml += j;
            printf("%d ",j);
        }
        printf("= %d\n",jml);
    }

    getch();
    return 0;
}