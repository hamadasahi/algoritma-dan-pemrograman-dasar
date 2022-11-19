#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int i;

    system("cls");
    
    for(i=1;i<=1024;i=i*2){
        printf("%d ",i);
    }

    getch();
    return 0;
}