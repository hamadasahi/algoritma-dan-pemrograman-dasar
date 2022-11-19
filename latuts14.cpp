#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    char kode;
    int sewa,lama,total,bayar,kembali,diskon;

    system("cls");
    printf("Masukkan kode (P, jika ada pelanggan warnet) : "); scanf("%c",&kode);

    if(kode=='p' || kode=='P'){ //untuk member
        sewa=4000;
        printf("Lama menyewa : "); scanf("%d",&lama);
        if(lama>=5){
            diskon=sewa*50/100;
        }else if(lama>=3 && lama<5){
            diskon=sewa*30/100;
        }else{
            diskon=0;
        }
    }else{ //untuk pelanggan umum
        sewa=5000; 
        printf("Lama menyewa : "); scanf("%d",&lama);
        if(lama>=5){
            diskon=sewa*50/100;
        }else if(lama>=3 && lama<5){
            diskon=sewa*30/100;
        }else{
            diskon=0;
        }
    }

    total=sewa-diskon;
    printf("Total = Rp.%d",total);
    printf("\nUang yang dibayarkan : Rp."); scanf("%d",&bayar);
    kembali=bayar-total;
    printf("Uang kembali = Rp.%d",kembali);

    getch();
    return 0;
}