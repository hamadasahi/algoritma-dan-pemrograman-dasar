#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int cm;
    float inch, m;
    system("cls");
    printf("Masukkan angka dalam satuan cm : "); scanf("%d",&cm);
    m = (float) cm / 100;
    inch = (float) cm / 2.54;

    printf("%d cm sama dengan %.2f m\n",cm,m);
    printf("%d cm sama dengan %.2f inchi",cm,inch);

    getch();
    return 0;
}