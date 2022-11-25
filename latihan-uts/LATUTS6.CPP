#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    char kode[10],jenis;
    int harga,pd,total;
    float diskon;

    system("cls");

    printf("Kode : "); scanf("%s",&kode);
    printf("Jenis (A, B, atau C) : "); scanf("%s",&jenis);

    if(jenis=='A' || jenis=='a'){
        printf("harga : "); scanf("%d",&harga);
        diskon = (float) harga*10/100;
        pd = 10;

        total = harga-diskon;

        printf("Jenis barang %c mendapatkan diskon = %d persen",jenis,pd);
        printf("\nHarga setelah didiskon = %d",total);
    }
    else if(jenis=='B' || jenis=='b'){
        printf("harga : "); scanf("%d",&harga);
        diskon = (float) harga*15/100;
        pd = 15;

        total = harga-diskon;

        printf("Jenis barang %c mendapatkan diskon = %d persen",jenis,pd);
        printf("\nHarga setelah didiskon = %d",total);
    }
    else if(jenis=='C' || jenis=='c'){
        printf("harga : "); scanf("%d",&harga);
        diskon = (float) harga*20/100;
        pd = 20;

        total = harga-diskon;

        printf("Jenis barang %c mendapatkan diskon = %d persen",jenis,pd);
        printf("\nHarga setelah didiskon = %d",total);
    }
    else{
	    printf("Masukkan jenis yang sesuai.");
    }

    getch();
    return 0;
}