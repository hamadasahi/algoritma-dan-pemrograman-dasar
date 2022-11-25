#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int i;

    system("cls");
    
    for(i=10;i<=100;i=i+10){
        printf("%d ",i);
    }

    getch();
    return 0;
}