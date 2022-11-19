#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int buku,jumlah,harga,total,diskon,ppn,bayar;

    system("cls");

    printf("1. Sukses Belajar Borland C++ harga Rp. 50.000,-");
    printf("\n2. Kunci Pribadi Sukses harga Rp. 35.000,-");
    printf("\n3. Mencari Mutiara Di Dasar Hati harga Rp. 45.000,-");
    
    printf("\n-------------------------------");
    printf("\nKode buku yang akan dibeli (1,2,3): "); scanf("%d",&buku);
    printf("Jumlah buku = "); scanf("%d",&jumlah);

    // if(buku==1){
    //     harga=50000;
    // }else if(buku==2){
    //     harga=35000;
    // }else if(buku==3){
    //     harga=45000;
    // }else{
    //     printf("Input yang anda masukan tidak sesuai.");
    // }
    switch (buku)
    {
    case 1: harga=50000; break;
    case 2: harga=35000; break;
    case 3: harga=45000; break;
    default: printf("Input yang anda masukan tidak sesuai.");
        break;
    }

    total=jumlah*harga;
    ppn=total*2/100;

    if(jumlah>=3){
        printf("Anda mendapatkan bonus buku saku.");
        diskon=total*10/100;
    }else{
        printf("Maaf tidak dapat bonus buku saku.");
        diskon=0;
    }

    bayar=total-diskon+ppn;
    printf("\nUang yang harus dibayar = %d",bayar);

    getch();
    return 0;
}