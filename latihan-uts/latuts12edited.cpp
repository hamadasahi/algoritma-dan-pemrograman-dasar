#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int tabungan, bunga, berbunga=0, bulan, saldo;
    system("cls");
    bulan = 2;
    tabungan = 1000000;

    do{
        bunga = tabungan*2/100;
        berbunga += bunga;
        bulan++;
    }while(bulan<=10);

    saldo = tabungan + berbunga;
    printf("Saldo di tabungan = %d",saldo);
    getch();
    return 0;
}