#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int a=2, b=20, jml=0;

    system("cls");
    
    for(a = a; a<=20; a+=2)
    { 
        printf("%d ", a);
        jml += a;
        if(a<b){
            printf("+ ");
        }
    }

    printf("= %d",jml);


    getch();
    return 0;
}