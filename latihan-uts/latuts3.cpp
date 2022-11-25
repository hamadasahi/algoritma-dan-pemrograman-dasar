#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
main()
{
    int alas, tinggi;
    float miring;

    system("cls");
    printf("Menghitung sisi miring segitiga");
    printf("\n\nalas segitiga : ");
    scanf("%d",&alas);
    printf("tinggi segi tiga : ");
    scanf("%d",&tinggi);

    miring=(float)sqrt((alas*alas)+(tinggi*tinggi));


    printf("\nSisi miring segi tiga = %.2f cm",miring);

    getch();
    return 0;
}