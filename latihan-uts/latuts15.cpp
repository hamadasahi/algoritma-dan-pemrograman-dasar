#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int menu,harga,jbeli,ppn,total,kasir;
    char namakasir[30];

    system("cls");

    printf("- Untuk paket hemat kodenya 1 (Rp. 7.400)");
    printf("\n- Untuk paket nasi kodenya 2 (Rp. 10.000)");
    printf("\n- Untuk paket spesial kodenya 3 (Rp. 15.000)");
    
    printf("\n-------------------------------");
    printf("\nMenu yang dipilih : "); scanf("%d",&menu);
    printf("Jumlah pembelian  : "); scanf("%d",&jbeli);
    printf("Kode kasir  : "); scanf("%d",&kasir);
    printf("Nama kasir  : "); scanf("%s",&namakasir);
    
    // if(menu==1){
    //     harga=7500;
    // }else if(menu==2){
    //     harga=10000;
    // }else if(menu==3){
    //     harga=15000;
    // }else{
    //     printf("Masukkan kode menu yang sesuai.");
    // }

    switch(menu){
        case 1 : harga=7500; break;
        case 2 : harga=10000; break;
        case 3 : harga=15000; break;
        default : printf("Input yang anda masukan salah!");
        break;
    }
    
    ppn=harga*10/100;
    total=harga+ppn;

    printf("-------------------------------");
    printf("\nJumlah pembelian = %d",jbeli);
    printf("\nPPN = %d",ppn);
    printf("\nTotal bayar = %d",total);
    printf("\nKode kasir = %d",kasir);
    printf("\nNama Kasir = %s",namakasir);

    getch();
    return 0;
}