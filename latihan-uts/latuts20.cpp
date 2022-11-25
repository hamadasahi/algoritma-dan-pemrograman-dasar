#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int i,j,jml,p;
    system("cls");

    for(i=1;i<=10;i=i+2)
    {
	    for(j=10,jml=0,p=3;j>=i;j=j-2)
        {
            p--;
            if(p<=1){
                printf("+");
            }
            printf("%d",j);
            jml += j;
        }
        printf("=%d\n",jml);
    }

    printf("\n");

    for(i=1;i<=10;i=i+2)
    {
	    for(j=1,jml=1,p=3;j<=i;j=j+2)
        {
            p--;
            if(p<=1){
                printf("*");
            }
            printf("%d",j);
            jml *= j;
        }
        printf("=%d",jml);
        printf("\n");
    }
}